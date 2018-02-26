// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// LSRA_opt_cpp
List LSRA_opt_cpp(double param, double FF_a, NumericVector Chist, double M_a, NumericVector Mat_age_a, NumericVector Wt_age_a, NumericVector sel_a, NumericVector Recdevs_a, double h_a, double Umax);
RcppExport SEXP _DLMtool_LSRA_opt_cpp(SEXP paramSEXP, SEXP FF_aSEXP, SEXP ChistSEXP, SEXP M_aSEXP, SEXP Mat_age_aSEXP, SEXP Wt_age_aSEXP, SEXP sel_aSEXP, SEXP Recdevs_aSEXP, SEXP h_aSEXP, SEXP UmaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type param(paramSEXP);
    Rcpp::traits::input_parameter< double >::type FF_a(FF_aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Chist(ChistSEXP);
    Rcpp::traits::input_parameter< double >::type M_a(M_aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Mat_age_a(Mat_age_aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Wt_age_a(Wt_age_aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sel_a(sel_aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Recdevs_a(Recdevs_aSEXP);
    Rcpp::traits::input_parameter< double >::type h_a(h_aSEXP);
    Rcpp::traits::input_parameter< double >::type Umax(UmaxSEXP);
    rcpp_result_gen = Rcpp::wrap(LSRA_opt_cpp(param, FF_a, Chist, M_a, Mat_age_a, Wt_age_a, sel_a, Recdevs_a, h_a, Umax));
    return rcpp_result_gen;
END_RCPP
}
// LSRA_MCMC_sim
List LSRA_MCMC_sim(double nits, NumericVector pars, NumericVector JumpCV, NumericVector adapt, NumericVector parLB, NumericVector parUB, int R0ind, int inflind, int slpind, IntegerVector RDind, int nyears, int maxage, double M, NumericVector Mat_age, NumericVector Wt_age, NumericVector Chist_a, double Umax, double h, NumericMatrix CAA, double CAAadj, double sigmaR);
RcppExport SEXP _DLMtool_LSRA_MCMC_sim(SEXP nitsSEXP, SEXP parsSEXP, SEXP JumpCVSEXP, SEXP adaptSEXP, SEXP parLBSEXP, SEXP parUBSEXP, SEXP R0indSEXP, SEXP inflindSEXP, SEXP slpindSEXP, SEXP RDindSEXP, SEXP nyearsSEXP, SEXP maxageSEXP, SEXP MSEXP, SEXP Mat_ageSEXP, SEXP Wt_ageSEXP, SEXP Chist_aSEXP, SEXP UmaxSEXP, SEXP hSEXP, SEXP CAASEXP, SEXP CAAadjSEXP, SEXP sigmaRSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type nits(nitsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type JumpCV(JumpCVSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type adapt(adaptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type parLB(parLBSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type parUB(parUBSEXP);
    Rcpp::traits::input_parameter< int >::type R0ind(R0indSEXP);
    Rcpp::traits::input_parameter< int >::type inflind(inflindSEXP);
    Rcpp::traits::input_parameter< int >::type slpind(slpindSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type RDind(RDindSEXP);
    Rcpp::traits::input_parameter< int >::type nyears(nyearsSEXP);
    Rcpp::traits::input_parameter< int >::type maxage(maxageSEXP);
    Rcpp::traits::input_parameter< double >::type M(MSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Mat_age(Mat_ageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Wt_age(Wt_ageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Chist_a(Chist_aSEXP);
    Rcpp::traits::input_parameter< double >::type Umax(UmaxSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type CAA(CAASEXP);
    Rcpp::traits::input_parameter< double >::type CAAadj(CAAadjSEXP);
    Rcpp::traits::input_parameter< double >::type sigmaR(sigmaRSEXP);
    rcpp_result_gen = Rcpp::wrap(LSRA_MCMC_sim(nits, pars, JumpCV, adapt, parLB, parUB, R0ind, inflind, slpind, RDind, nyears, maxage, M, Mat_age, Wt_age, Chist_a, Umax, h, CAA, CAAadj, sigmaR));
    return rcpp_result_gen;
END_RCPP
}
// bhnoneq_LL
double bhnoneq_LL(NumericVector stpar, NumericVector year, NumericVector Lbar, NumericVector ss, double Linf, double K, double Lc, int nbreaks);
RcppExport SEXP _DLMtool_bhnoneq_LL(SEXP stparSEXP, SEXP yearSEXP, SEXP LbarSEXP, SEXP ssSEXP, SEXP LinfSEXP, SEXP KSEXP, SEXP LcSEXP, SEXP nbreaksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type stpar(stparSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type year(yearSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Lbar(LbarSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ss(ssSEXP);
    Rcpp::traits::input_parameter< double >::type Linf(LinfSEXP);
    Rcpp::traits::input_parameter< double >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type Lc(LcSEXP);
    Rcpp::traits::input_parameter< int >::type nbreaks(nbreaksSEXP);
    rcpp_result_gen = Rcpp::wrap(bhnoneq_LL(stpar, year, Lbar, ss, Linf, K, Lc, nbreaks));
    return rcpp_result_gen;
END_RCPP
}
// get_freq
NumericVector get_freq(NumericVector x, NumericVector breaks);
RcppExport SEXP _DLMtool_get_freq(SEXP xSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type breaks(breaksSEXP);
    rcpp_result_gen = Rcpp::wrap(get_freq(x, breaks));
    return rcpp_result_gen;
END_RCPP
}
// repcpp
NumericVector repcpp(NumericVector x, NumericVector y);
RcppExport SEXP _DLMtool_repcpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(repcpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// makeLenComp
NumericMatrix makeLenComp(NumericVector AgeVec, NumericVector SubAgeVec, NumericVector Linfarray_c, NumericVector Karray_c, NumericVector t0array_c, double LenCV_c, NumericVector CAL_bins, NumericVector CAL_binsmid, NumericMatrix retLength, double CAL_ESS, double CAL_nsamp, NumericMatrix VulnN, double truncSD);
RcppExport SEXP _DLMtool_makeLenComp(SEXP AgeVecSEXP, SEXP SubAgeVecSEXP, SEXP Linfarray_cSEXP, SEXP Karray_cSEXP, SEXP t0array_cSEXP, SEXP LenCV_cSEXP, SEXP CAL_binsSEXP, SEXP CAL_binsmidSEXP, SEXP retLengthSEXP, SEXP CAL_ESSSEXP, SEXP CAL_nsampSEXP, SEXP VulnNSEXP, SEXP truncSDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type AgeVec(AgeVecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type SubAgeVec(SubAgeVecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Linfarray_c(Linfarray_cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Karray_c(Karray_cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t0array_c(t0array_cSEXP);
    Rcpp::traits::input_parameter< double >::type LenCV_c(LenCV_cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type CAL_bins(CAL_binsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type CAL_binsmid(CAL_binsmidSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type retLength(retLengthSEXP);
    Rcpp::traits::input_parameter< double >::type CAL_ESS(CAL_ESSSEXP);
    Rcpp::traits::input_parameter< double >::type CAL_nsamp(CAL_nsampSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type VulnN(VulnNSEXP);
    Rcpp::traits::input_parameter< double >::type truncSD(truncSDSEXP);
    rcpp_result_gen = Rcpp::wrap(makeLenComp(AgeVec, SubAgeVec, Linfarray_c, Karray_c, t0array_c, LenCV_c, CAL_bins, CAL_binsmid, retLength, CAL_ESS, CAL_nsamp, VulnN, truncSD));
    return rcpp_result_gen;
END_RCPP
}
// movfit_Rcpp
double movfit_Rcpp(NumericVector par, double prb, double frac);
RcppExport SEXP _DLMtool_movfit_Rcpp(SEXP parSEXP, SEXP prbSEXP, SEXP fracSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< double >::type prb(prbSEXP);
    Rcpp::traits::input_parameter< double >::type frac(fracSEXP);
    rcpp_result_gen = Rcpp::wrap(movfit_Rcpp(par, prb, frac));
    return rcpp_result_gen;
END_RCPP
}
// popdynOneTScpp
Rcpp::NumericMatrix popdynOneTScpp(double nareas, double maxage, Rcpp::NumericVector SSBcurr, Rcpp::NumericMatrix Ncurr, Rcpp::NumericMatrix Zcurr, double PerrYr, double hs, Rcpp::NumericVector R0a, Rcpp::NumericVector SSBpR, Rcpp::NumericVector aR, Rcpp::NumericVector bR, Rcpp::NumericMatrix mov, double SRrel);
RcppExport SEXP _DLMtool_popdynOneTScpp(SEXP nareasSEXP, SEXP maxageSEXP, SEXP SSBcurrSEXP, SEXP NcurrSEXP, SEXP ZcurrSEXP, SEXP PerrYrSEXP, SEXP hsSEXP, SEXP R0aSEXP, SEXP SSBpRSEXP, SEXP aRSEXP, SEXP bRSEXP, SEXP movSEXP, SEXP SRrelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type nareas(nareasSEXP);
    Rcpp::traits::input_parameter< double >::type maxage(maxageSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type SSBcurr(SSBcurrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Ncurr(NcurrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Zcurr(ZcurrSEXP);
    Rcpp::traits::input_parameter< double >::type PerrYr(PerrYrSEXP);
    Rcpp::traits::input_parameter< double >::type hs(hsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type R0a(R0aSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type SSBpR(SSBpRSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type aR(aRSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bR(bRSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type mov(movSEXP);
    Rcpp::traits::input_parameter< double >::type SRrel(SRrelSEXP);
    rcpp_result_gen = Rcpp::wrap(popdynOneTScpp(nareas, maxage, SSBcurr, Ncurr, Zcurr, PerrYr, hs, R0a, SSBpR, aR, bR, mov, SRrel));
    return rcpp_result_gen;
END_RCPP
}
// popdynCPP
List popdynCPP(double nareas, double maxage, arma::mat Ncurr, double pyears, arma::mat M_age, arma::vec Asize_c, arma::mat MatAge, arma::mat WtAge, arma::mat Vuln, arma::mat Retc, arma::vec Prec, NumericMatrix movc, double SRrelc, arma::vec Effind, double Spat_targc, double hc, NumericVector R0c, NumericVector SSBpRc, NumericVector aRc, NumericVector bRc, double Qc, double Fapic, double maxF, arma::mat MPA, int control);
RcppExport SEXP _DLMtool_popdynCPP(SEXP nareasSEXP, SEXP maxageSEXP, SEXP NcurrSEXP, SEXP pyearsSEXP, SEXP M_ageSEXP, SEXP Asize_cSEXP, SEXP MatAgeSEXP, SEXP WtAgeSEXP, SEXP VulnSEXP, SEXP RetcSEXP, SEXP PrecSEXP, SEXP movcSEXP, SEXP SRrelcSEXP, SEXP EffindSEXP, SEXP Spat_targcSEXP, SEXP hcSEXP, SEXP R0cSEXP, SEXP SSBpRcSEXP, SEXP aRcSEXP, SEXP bRcSEXP, SEXP QcSEXP, SEXP FapicSEXP, SEXP maxFSEXP, SEXP MPASEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type nareas(nareasSEXP);
    Rcpp::traits::input_parameter< double >::type maxage(maxageSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Ncurr(NcurrSEXP);
    Rcpp::traits::input_parameter< double >::type pyears(pyearsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type M_age(M_ageSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Asize_c(Asize_cSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MatAge(MatAgeSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type WtAge(WtAgeSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Vuln(VulnSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Retc(RetcSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Prec(PrecSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type movc(movcSEXP);
    Rcpp::traits::input_parameter< double >::type SRrelc(SRrelcSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Effind(EffindSEXP);
    Rcpp::traits::input_parameter< double >::type Spat_targc(Spat_targcSEXP);
    Rcpp::traits::input_parameter< double >::type hc(hcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R0c(R0cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type SSBpRc(SSBpRcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type aRc(aRcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bRc(bRcSEXP);
    Rcpp::traits::input_parameter< double >::type Qc(QcSEXP);
    Rcpp::traits::input_parameter< double >::type Fapic(FapicSEXP);
    Rcpp::traits::input_parameter< double >::type maxF(maxFSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MPA(MPASEXP);
    Rcpp::traits::input_parameter< int >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(popdynCPP(nareas, maxage, Ncurr, pyears, M_age, Asize_c, MatAge, WtAge, Vuln, Retc, Prec, movc, SRrelc, Effind, Spat_targc, hc, R0c, SSBpRc, aRc, bRc, Qc, Fapic, maxF, MPA, control));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_DLMtool_LSRA_opt_cpp", (DL_FUNC) &_DLMtool_LSRA_opt_cpp, 10},
    {"_DLMtool_LSRA_MCMC_sim", (DL_FUNC) &_DLMtool_LSRA_MCMC_sim, 21},
    {"_DLMtool_bhnoneq_LL", (DL_FUNC) &_DLMtool_bhnoneq_LL, 8},
    {"_DLMtool_get_freq", (DL_FUNC) &_DLMtool_get_freq, 2},
    {"_DLMtool_repcpp", (DL_FUNC) &_DLMtool_repcpp, 2},
    {"_DLMtool_makeLenComp", (DL_FUNC) &_DLMtool_makeLenComp, 13},
    {"_DLMtool_movfit_Rcpp", (DL_FUNC) &_DLMtool_movfit_Rcpp, 3},
    {"_DLMtool_popdynOneTScpp", (DL_FUNC) &_DLMtool_popdynOneTScpp, 13},
    {"_DLMtool_popdynCPP", (DL_FUNC) &_DLMtool_popdynCPP, 25},
    {NULL, NULL, 0}
};

RcppExport void R_init_DLMtool(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
