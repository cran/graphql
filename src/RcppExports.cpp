// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dump_json_ast
Rcpp::String dump_json_ast(Rcpp::String graph, bool schema);
RcppExport SEXP _graphql_dump_json_ast(SEXP graphSEXP, SEXP schemaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< bool >::type schema(schemaSEXP);
    rcpp_result_gen = Rcpp::wrap(dump_json_ast(graph, schema));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_graphql_dump_json_ast", (DL_FUNC) &_graphql_dump_json_ast, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_graphql(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
