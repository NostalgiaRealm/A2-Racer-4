
/* ==== thunk_FUN_00404d7c @ 00404d74 ==== 
 * signature: undefined __register thunk_FUN_00404d7c(LPCSTR param_1)
 * body: 00404d74-00404d75
 * thunk to: FUN_00404d7c
 */

void thunk_FUN_00404d7c(LPCSTR param_1)

{
  for (; (*param_1 != '\0' && (*param_1 != '\\')); param_1 = CharNextA(param_1)) {
  }
  return;
}


