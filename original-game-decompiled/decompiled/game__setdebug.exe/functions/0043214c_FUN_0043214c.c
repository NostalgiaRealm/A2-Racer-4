
/* ==== FUN_0043214c @ 0043214c ==== 
 * signature: HANDLE __register FUN_0043214c(POINT * param_1)
 * body: 0043214c-0043217a
 */

HANDLE FUN_0043214c(POINT *param_1)

{
  HANDLE pvVar1;
  HANDLE pvVar2;
  
  pvVar1 = FUN_00423224(param_1);
  pvVar2 = (HANDLE)0x0;
  if (pvVar1 != (HANDLE)0x0) {
    pvVar2 = (HANDLE)FUN_00428124((int)pvVar1,param_1,0,'\0');
    if (pvVar2 == (HANDLE)0x0) {
      pvVar2 = pvVar1;
    }
  }
  return pvVar2;
}


