/*
 * AbstractModelSpecifics.h
 *
 *  Created on: Jul 13, 2012
 *      Author: msuchard
 */

#ifndef ABSTRACTMODELSPECIFICS_H_
#define ABSTRACTMODELSPECIFICS_H_

#include <vector>
#include <cmath>
#include <map>
#include <cstddef>

#include "Types.h"

#include "ParallelLoops.h"

namespace bsccs {

class CompressedDataMatrix;  // forward declaration
class CompressedDataColumn; // forward declaration
class ModelData; // forward declaration
enum class ModelType; // forward declaration

#ifdef DOUBLE_PRECISION
	typedef double real;
#else
	typedef float real;
#endif

//#define DEBUG_COX // Uncomment to get output for Cox model
//#define DEBUG_POISSON

class AbstractModelSpecifics {
public:
//	AbstractModelSpecifics(
//			const std::vector<real>& y,
//			const std::vector<real>& z);

	AbstractModelSpecifics(const ModelData& intput);

	virtual ~AbstractModelSpecifics();

	void initialize(
			int iN,
			int iK,
			int iJ,
			CompressedDataMatrix* iXI,
			real* iNumerPid,
			real* iNumerPid2,
			real* iDenomPid,
			real* iXjY,
			std::vector<std::vector<int>* >* iSparseIndices,
			int* iPid,
			real* iOffsExpXBeta,
			real* iXBeta,
			real* iOffs,
			real* iBeta,
			real* iY);
			
	virtual void initializeMM(std::vector<bool>& fixBeta, std::vector<double>& ccdBeta, std::vector<double>& mmBeta) = 0; // pure virtual

	virtual void setWeights(real* inWeights, bool useCrossValidation) = 0; // pure virtual

	virtual void computeGradientAndHessian(int index, double *ogradient,
			double *ohessian, bool useWeights) = 0; // pure virtual
			
	virtual void computeMMGradientAndHessian(int index, double *ogradient,
			double *ohessian, double scale, bool useWeights) = 0; // pure virtual			

	virtual void computeNumeratorForGradient(int index) = 0; // pure virtual

	virtual void computeFisherInformation(int indexOne, int indexTwo,
			double *oinfo, bool useWeights) = 0; // pure virtual

	virtual void updateXBeta(real realDelta, int index, bool useWeights) = 0; // pure virtual
	
	virtual void computeXBeta(double* beta) = 0; // pure virtual
	
	virtual void computeXBeta(double* beta, C11ThreadPool &test) = 0; // pure virtual
	virtual void computeXBeta(double* beta, C11Threads &test) = 0; // pure virtual


	virtual void computeRemainingStatistics(bool useWeights) = 0; // pure virtual

	virtual void computeFixedTermsInLogLikelihood(bool useCrossValidation) = 0; // pure virtual

	virtual void computeFixedTermsInGradientAndHessian(bool useCrossValidation) = 0; // pure virtual

	virtual double getLogLikelihood(bool useCrossValidation) = 0; // pure virtual

	virtual double getPredictiveLogLikelihood(real* weights) = 0; // pure virtual

    virtual void getPredictiveEstimates(real* y, real* weights) = 0; // pure virtual

    virtual void makeDirty();

//	virtual void sortPid(bool useCrossValidation) = 0; // pure virtual

//	static bsccs::shared_ptr<AbstractModelSpecifics> factory(const ModelType modelType, const ModelData& modelData);
	
	static AbstractModelSpecifics* factory(const ModelType modelType, const ModelData& modelData);

protected:

	int getAlignedLength(int N);

	virtual bool allocateXjY(void) = 0; // pure virtual

	virtual bool allocateXjX(void) = 0; // pure virtual
	
	virtual bool initializeAccumulationVectors(void) = 0; // pure virtual

	virtual bool hasResetableAccumulators(void) = 0; // pure virtual

	template <class T>
	void fillVector(T* vector, const int length, const T& value) {
		for (int i = 0; i < length; i++) {
			vector[i] = value;
		}
	}

	template <class T>
	void zeroVector(T* vector, const int length) {
		fillVector(vector, length, T());
	}
	
private:
	const ModelData& modelData;	
	
protected:	

// 	const std::vector<real>& oY;
// 	const std::vector<real>& oZ;
// 	const std::vector<int>& oPid;

	CompressedDataMatrix* hXI; // K-by-J-matrix in column-major
	
	bsccs::shared_ptr<CompressedDataMatrix> hXt; // J-by-K matrix in column-major

	RealVector accDenomPid;
	RealVector accNumerPid;
	RealVector accNumerPid2;
	
	IntVector accReset;

	real* hY; // K-vector
//	real* hZ; // K-vector
	real* hOffs;  // K-vector
	int* hPid; // K-vector
//	int** hXColumnRowIndicators; // J-vector

	real* hXBeta;
	real* hXBetaSave;
//	real* hDelta;

	size_t N; // Number of patients
	size_t K; // Number of exposure levels
	size_t J; // Number of drugs

//	real* expXBeta;
//	real* offsExpXBeta;
	RealVector offsExpXBeta;
	
	RealVector numerDenomPidCache;
	real* denomPid; // all nested with a single cache
	real* numerPid;
	real* numerPid2;
	
//	real* xOffsExpXBeta;
//	real* hXjY;
	RealVector hXjY;
	RealVector hXjX;
	real logLikelihoodFixedTerm;
	
	typedef std::vector<int> IndexVector;
	typedef bsccs::shared_ptr<IndexVector> IndexVectorPtr;

	std::vector<IndexVectorPtr> sparseIndices; // TODO in c++11, are pointers necessary?

	typedef std::map<int, std::vector<real> > HessianMap;
	HessianMap hessianCrossTerms;

    typedef bsccs::shared_ptr<CompressedDataColumn> CDCPtr;
	typedef std::map<int, CDCPtr> HessianSparseMap;
	HessianSparseMap hessianSparseCrossTerms;
	
	typedef std::vector<int> TimeTie;
	std::vector<TimeTie> ties;
	
	std::vector<int> beginTies;
	std::vector<int> endTies;
};

typedef bsccs::shared_ptr<AbstractModelSpecifics> ModelSpecificsPtr;

} // namespace

#endif /* ABSTRACTMODELSPECIFICS_H_ */
