
/* ==== FUN_00428528 @ 00428528 ==== 
 * signature: bool __register FUN_00428528(HWND param_1, int * param_2)
 * body: 00428528-0042855a
 */

bool FUN_00428528(HWND param_1,int *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  
  pvVar1 = FUN_00421a0c(param_1);
  if (pvVar1 != (HANDLE)0x0) {
    iVar2 = FUN_00425780((int)pvVar1,*param_2 + 0xbc00,param_2[1],param_2[2]);
    param_2[3] = iVar2;
  }
  return pvVar1 != (HANDLE)0x0;
}


