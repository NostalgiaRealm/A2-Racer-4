
/* ==== thunk_FUN_004052ec @ 004052e4 ==== 
 * signature: undefined __register thunk_FUN_004052ec(LPCSTR param_1)
 * body: 004052e4-004052e5
 * thunk to: FUN_004052ec
 */

void thunk_FUN_004052ec(LPCSTR param_1)

{
  for (; (*param_1 != '\0' && (*param_1 != '\\')); param_1 = CharNextA(param_1)) {
  }
  return;
}


