
/* ==== FUN_004088e4 @ 004088e4 ==== 
 * signature: bool __register FUN_004088e4(undefined * param_1)
 * body: 004088e4-004088fb
 */

bool FUN_004088e4(undefined *param_1)

{
  LPCSTR lpFileName;
  BOOL BVar1;
  
  lpFileName = FUN_004040a0(param_1);
  BVar1 = DeleteFileA(lpFileName);
  return BVar1 != 0;
}


