// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// ccdSetBeta
void ccdSetBeta(SEXP inRcppCcdInterface, int beta, double value);
RcppExport SEXP CCD_ccdSetBeta(SEXP inRcppCcdInterfaceSEXP, SEXP betaSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< int >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< double >::type value(valueSEXP );
        ccdSetBeta(inRcppCcdInterface, beta, value);
    }
    return R_NilValue;
END_RCPP
}
// ccdSetFixedBeta
void ccdSetFixedBeta(SEXP inRcppCcdInterface, int beta, bool fixed);
RcppExport SEXP CCD_ccdSetFixedBeta(SEXP inRcppCcdInterfaceSEXP, SEXP betaSEXP, SEXP fixedSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< int >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< bool >::type fixed(fixedSEXP );
        ccdSetFixedBeta(inRcppCcdInterface, beta, fixed);
    }
    return R_NilValue;
END_RCPP
}
// ccdGetLogLikelihood
double ccdGetLogLikelihood(SEXP inRcppCcdInterface);
RcppExport SEXP CCD_ccdGetLogLikelihood(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        double __result = ccdGetLogLikelihood(inRcppCcdInterface);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdSetPrior
void ccdSetPrior(SEXP inRcppCcdInterface, const std::string& priorTypeName, double variance, SEXP excludeNumeric);
RcppExport SEXP CCD_ccdSetPrior(SEXP inRcppCcdInterfaceSEXP, SEXP priorTypeNameSEXP, SEXP varianceSEXP, SEXP excludeNumericSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type priorTypeName(priorTypeNameSEXP );
        Rcpp::traits::input_parameter< double >::type variance(varianceSEXP );
        Rcpp::traits::input_parameter< SEXP >::type excludeNumeric(excludeNumericSEXP );
        ccdSetPrior(inRcppCcdInterface, priorTypeName, variance, excludeNumeric);
    }
    return R_NilValue;
END_RCPP
}
// ccdProfileModel
List ccdProfileModel(SEXP inRcppCcdInterface, SEXP sexpCovariates, bool override);
RcppExport SEXP CCD_ccdProfileModel(SEXP inRcppCcdInterfaceSEXP, SEXP sexpCovariatesSEXP, SEXP overrideSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< SEXP >::type sexpCovariates(sexpCovariatesSEXP );
        Rcpp::traits::input_parameter< bool >::type override(overrideSEXP );
        List __result = ccdProfileModel(inRcppCcdInterface, sexpCovariates, override);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdPredictModel
List ccdPredictModel(SEXP inRcppCcdInterface);
RcppExport SEXP CCD_ccdPredictModel(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        List __result = ccdPredictModel(inRcppCcdInterface);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdSetControl
void ccdSetControl(SEXP inRcppCcdInterface, int maxIterations, double tolerance, const std::string& convergenceType, bool useAutoSearch, int fold, int foldToCompute, double lowerLimit, double upperLimit, int gridSteps, const std::string& noiseLevel);
RcppExport SEXP CCD_ccdSetControl(SEXP inRcppCcdInterfaceSEXP, SEXP maxIterationsSEXP, SEXP toleranceSEXP, SEXP convergenceTypeSEXP, SEXP useAutoSearchSEXP, SEXP foldSEXP, SEXP foldToComputeSEXP, SEXP lowerLimitSEXP, SEXP upperLimitSEXP, SEXP gridStepsSEXP, SEXP noiseLevelSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< int >::type maxIterations(maxIterationsSEXP );
        Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type convergenceType(convergenceTypeSEXP );
        Rcpp::traits::input_parameter< bool >::type useAutoSearch(useAutoSearchSEXP );
        Rcpp::traits::input_parameter< int >::type fold(foldSEXP );
        Rcpp::traits::input_parameter< int >::type foldToCompute(foldToComputeSEXP );
        Rcpp::traits::input_parameter< double >::type lowerLimit(lowerLimitSEXP );
        Rcpp::traits::input_parameter< double >::type upperLimit(upperLimitSEXP );
        Rcpp::traits::input_parameter< int >::type gridSteps(gridStepsSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type noiseLevel(noiseLevelSEXP );
        ccdSetControl(inRcppCcdInterface, maxIterations, tolerance, convergenceType, useAutoSearch, fold, foldToCompute, lowerLimit, upperLimit, gridSteps, noiseLevel);
    }
    return R_NilValue;
END_RCPP
}
// ccdRunCrossValidationl
List ccdRunCrossValidationl(SEXP inRcppCcdInterface);
RcppExport SEXP CCD_ccdRunCrossValidationl(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        List __result = ccdRunCrossValidationl(inRcppCcdInterface);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdFitModel
List ccdFitModel(SEXP inRcppCcdInterface);
RcppExport SEXP CCD_ccdFitModel(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        List __result = ccdFitModel(inRcppCcdInterface);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdLogModel
List ccdLogModel(SEXP inRcppCcdInterface);
RcppExport SEXP CCD_ccdLogModel(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        List __result = ccdLogModel(inRcppCcdInterface);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdInitializeModel
List ccdInitializeModel(SEXP inModelData, const std::string& modelType, bool computeMLE = false);
RcppExport SEXP CCD_ccdInitializeModel(SEXP inModelDataSEXP, SEXP modelTypeSEXP, SEXP computeMLESEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inModelData(inModelDataSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type modelType(modelTypeSEXP );
        Rcpp::traits::input_parameter< bool >::type computeMLE(computeMLESEXP );
        List __result = ccdInitializeModel(inModelData, modelType, computeMLE);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// isRcppPtrNull
bool isRcppPtrNull(SEXP x);
RcppExport SEXP CCD_isRcppPtrNull(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type x(xSEXP );
        bool __result = isRcppPtrNull(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdGetNumberOfStrata
size_t ccdGetNumberOfStrata(Environment x);
RcppExport SEXP CCD_ccdGetNumberOfStrata(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        size_t __result = ccdGetNumberOfStrata(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdGetNumberOfColumns
size_t ccdGetNumberOfColumns(Environment x);
RcppExport SEXP CCD_ccdGetNumberOfColumns(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        size_t __result = ccdGetNumberOfColumns(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdGetNumberOfRows
size_t ccdGetNumberOfRows(Environment x);
RcppExport SEXP CCD_ccdGetNumberOfRows(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        size_t __result = ccdGetNumberOfRows(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdNewSqlData
List ccdNewSqlData(const std::string& modelTypeName);
RcppExport SEXP CCD_ccdNewSqlData(SEXP modelTypeNameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type modelTypeName(modelTypeNameSEXP );
        List __result = ccdNewSqlData(modelTypeName);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdAppendSqlData
size_t ccdAppendSqlData(Environment x, const std::vector<long>& oStratumId, const std::vector<long>& oRowId, const std::vector<double>& oY, const std::vector<double>& oTime, const std::vector<long>& cRowId, const std::vector<long>& cCovariateId, const std::vector<double>& cCovariateValue);
RcppExport SEXP CCD_ccdAppendSqlData(SEXP xSEXP, SEXP oStratumIdSEXP, SEXP oRowIdSEXP, SEXP oYSEXP, SEXP oTimeSEXP, SEXP cRowIdSEXP, SEXP cCovariateIdSEXP, SEXP cCovariateValueSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        Rcpp::traits::input_parameter< const std::vector<long>& >::type oStratumId(oStratumIdSEXP );
        Rcpp::traits::input_parameter< const std::vector<long>& >::type oRowId(oRowIdSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type oY(oYSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type oTime(oTimeSEXP );
        Rcpp::traits::input_parameter< const std::vector<long>& >::type cRowId(cRowIdSEXP );
        Rcpp::traits::input_parameter< const std::vector<long>& >::type cCovariateId(cCovariateIdSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type cCovariateValue(cCovariateValueSEXP );
        size_t __result = ccdAppendSqlData(x, oStratumId, oRowId, oY, oTime, cRowId, cCovariateId, cCovariateValue);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdReadFileData
List ccdReadFileData(const std::string& fileName, const std::string& modelTypeName);
RcppExport SEXP CCD_ccdReadFileData(SEXP fileNameSEXP, SEXP modelTypeNameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type fileName(fileNameSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type modelTypeName(modelTypeNameSEXP );
        List __result = ccdReadFileData(fileName, modelTypeName);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdModelData
List ccdModelData(SEXP pid, SEXP y, SEXP z, SEXP offs, SEXP dx, SEXP sx, SEXP ix);
RcppExport SEXP CCD_ccdModelData(SEXP pidSEXP, SEXP ySEXP, SEXP zSEXP, SEXP offsSEXP, SEXP dxSEXP, SEXP sxSEXP, SEXP ixSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type pid(pidSEXP );
        Rcpp::traits::input_parameter< SEXP >::type y(ySEXP );
        Rcpp::traits::input_parameter< SEXP >::type z(zSEXP );
        Rcpp::traits::input_parameter< SEXP >::type offs(offsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type dx(dxSEXP );
        Rcpp::traits::input_parameter< SEXP >::type sx(sxSEXP );
        Rcpp::traits::input_parameter< SEXP >::type ix(ixSEXP );
        List __result = ccdModelData(pid, y, z, offs, dx, sx, ix);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
