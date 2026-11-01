
/* ==== FUN_00407e3c @ 00407e3c ==== 
 * signature: undefined __register FUN_00407e3c(undefined * param_1)
 * body: 00407e3c-00407e4d
 */

void FUN_00407e3c(undefined *param_1)

{
  LPCSTR lpFileName;
  
  lpFileName = FUN_00403dfc(param_1);
  GetFileAttributesA(lpFileName);
  return;
}


