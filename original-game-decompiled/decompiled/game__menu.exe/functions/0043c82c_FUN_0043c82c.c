
/* ==== FUN_0043c82c @ 0043c82c ==== 
 * signature: HANDLE __register FUN_0043c82c(POINT * param_1)
 * body: 0043c82c-0043c85a
 */

HANDLE FUN_0043c82c(POINT *param_1)

{
  HANDLE pvVar1;
  HANDLE pvVar2;
  
  pvVar1 = FUN_0042d164(param_1);
  pvVar2 = (HANDLE)0x0;
  if (pvVar1 != (HANDLE)0x0) {
    pvVar2 = (HANDLE)FUN_004320c4((int)pvVar1,param_1,0,'\0');
    if (pvVar2 == (HANDLE)0x0) {
      pvVar2 = pvVar1;
    }
  }
  return pvVar2;
}


