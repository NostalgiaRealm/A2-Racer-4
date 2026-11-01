
/* ==== FUN_004324c8 @ 004324c8 ==== 
 * signature: bool __register FUN_004324c8(HWND param_1, int * param_2)
 * body: 004324c8-004324fa
 */

bool FUN_004324c8(HWND param_1,int *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  
  pvVar1 = FUN_0042b94c(param_1);
  if (pvVar1 != (HANDLE)0x0) {
    iVar2 = FUN_0042f720((int)pvVar1,*param_2 + 0xbc00,param_2[1],param_2[2]);
    param_2[3] = iVar2;
  }
  return pvVar1 != (HANDLE)0x0;
}


