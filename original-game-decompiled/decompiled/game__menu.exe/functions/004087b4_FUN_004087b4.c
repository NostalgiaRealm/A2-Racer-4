
/* ==== FUN_004087b4 @ 004087b4 ==== 
 * signature: undefined __register FUN_004087b4(undefined * param_1)
 * body: 004087b4-004087c5
 */

void FUN_004087b4(undefined *param_1)

{
  LPCSTR lpFileName;
  
  lpFileName = FUN_004040a0(param_1);
  GetFileAttributesA(lpFileName);
  return;
}


