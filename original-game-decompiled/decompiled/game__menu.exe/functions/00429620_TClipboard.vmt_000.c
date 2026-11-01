
/* ==== TClipboard.vmt_000 @ 00429620 ==== 
 * signature: undefined TClipboard.vmt_000(void)
 * body: 00429620-00429686
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TClipboard_vmt_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPicture_vmt_000_0041702c);
  if ((char)uVar1 != '\0') {
    FUN_004294a4((int)param_1,param_2);
    return;
  }
  uVar1 = FUN_00403114(param_2,(int)FUN_004173a4);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00417234);
    if ((char)uVar1 == '\0') {
      TPersistent_vmt_000(param_1,param_2);
    }
    else {
      FUN_004295bc(param_1,param_2);
    }
  }
  else {
    FUN_00429554((int)param_1,param_2);
  }
  return;
}


