
/* ==== FUN_0045b0ac @ 0045b0ac ==== 
 * signature: int * __register FUN_0045b0ac(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 0045b0ac-0045b0e3
 */

int * FUN_0045b0ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_004aacb4 == (int *)0x0) {
    DAT_004aacb4 = TDaviSharedTimer_vmt_000((int *)FUN_0045af10,'\x01',param_3);
    piVar1 = FUN_00452d68(&DAT_00452a8c,extraout_EDX,extraout_ECX);
    FUN_00452e94(piVar1,0x45b09c);
  }
  return DAT_004aacb4;
}


