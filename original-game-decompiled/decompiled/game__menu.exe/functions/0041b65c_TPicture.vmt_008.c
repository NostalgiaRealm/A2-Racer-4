
/* ==== TPicture.vmt_008 @ 0041b65c ==== 
 * signature: undefined TPicture.vmt_008(void)
 * body: 0041b65c-0041b6b6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPicture_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (int *)0x0) {
    FUN_0041b4a4(param_1,(undefined4 *)0x0);
    return;
  }
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPicture_vmt_000_0041702c);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00416f48);
    if ((char)uVar1 == '\0') {
      TPersistent_vmt_008(param_1,param_2);
    }
    else {
      FUN_0041b4a4(param_1,param_2);
    }
  }
  else {
    FUN_0041b4a4(param_1,(undefined4 *)param_2[1]);
  }
  return;
}


