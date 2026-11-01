
/* ==== FUN_0045a854 @ 0045a854 ==== 
 * signature: int * __register FUN_0045a854(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 0045a854-0045a88b
 */

int * FUN_0045a854(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_004aacb0 == (int *)0x0) {
    DAT_004aacb0 = TDaviAnimationLoaderFactory_vmt_000
                             ((int *)&PTR_TDaviAnimationLoaderFactory_vmt_000_0045a33c,'\x01',
                              param_3);
    piVar1 = FUN_00452d68(&DAT_00452a8c,extraout_EDX,extraout_ECX);
    FUN_00452e94(piVar1,0x45a844);
  }
  return DAT_004aacb0;
}


