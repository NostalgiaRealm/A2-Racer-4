
/* ==== FUN_00404d7c @ 00404d7c ==== 
 * signature: undefined __register FUN_00404d7c(LPCSTR param_1)
 * body: 00404d76-00404d87
 */

void FUN_00404d7c(LPCSTR param_1)

{
  for (; (*param_1 != '\0' && (*param_1 != '\\')); param_1 = CharNextA(param_1)) {
  }
  return;
}


