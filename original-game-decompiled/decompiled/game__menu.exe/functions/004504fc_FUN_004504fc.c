
/* ==== FUN_004504fc @ 004504fc ==== 
 * signature: undefined __register FUN_004504fc(int * param_1, UINT * param_2, undefined4 param_3)
 * body: 004504fc-00450535;00450551-0045056e
 */

void FUN_004504fc(int *param_1,UINT *param_2,undefined4 param_3)

{
  UINT UVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  
  if (*param_2 == 0x113) {
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe0;
    FUN_00403178(param_1,param_2,param_3);
    *in_FS_OFFSET = uVar2;
  }
  else {
    UVar1 = DefWindowProcA((HWND)param_1[10],*param_2,param_2[1],param_2[2]);
    param_2[3] = UVar1;
  }
  return;
}


