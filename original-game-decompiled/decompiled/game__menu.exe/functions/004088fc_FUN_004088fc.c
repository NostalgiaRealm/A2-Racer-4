
/* ==== FUN_004088fc @ 004088fc ==== 
 * signature: bool __register FUN_004088fc(undefined * param_1, undefined * param_2)
 * body: 004088fc-0040891f
 */

bool FUN_004088fc(undefined *param_1,undefined *param_2)

{
  LPCSTR lpNewFileName;
  LPCSTR lpExistingFileName;
  BOOL BVar1;
  
  lpNewFileName = FUN_004040a0(param_2);
  lpExistingFileName = FUN_004040a0(param_1);
  BVar1 = MoveFileA(lpExistingFileName,lpNewFileName);
  return BVar1 != 0;
}


