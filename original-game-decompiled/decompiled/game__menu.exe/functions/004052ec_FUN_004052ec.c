
/* ==== FUN_004052ec @ 004052ec ==== 
 * signature: undefined __register FUN_004052ec(LPCSTR param_1)
 * body: 004052e6-004052f7
 */

void FUN_004052ec(LPCSTR param_1)

{
  for (; (*param_1 != '\0' && (*param_1 != '\\')); param_1 = CharNextA(param_1)) {
  }
  return;
}


