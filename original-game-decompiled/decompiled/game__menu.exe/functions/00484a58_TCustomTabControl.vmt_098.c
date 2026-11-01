
/* ==== TCustomTabControl.vmt_098 @ 00484a58 ==== 
 * signature: undefined TCustomTabControl.vmt_098(void)
 * body: 00484a58-00484adb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomTabControl_vmt_098(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  TWinControl_vmt_098(param_1);
  if (param_1[0x7f] != 0) {
    bVar1 = FUN_0043a3e4(param_1[0x7f]);
    if (bVar1) {
      iVar2 = FUN_0043a5b8((int *)param_1[0x7f]);
      FUN_0042f720((int)param_1,0x1303,0,iVar2);
    }
  }
  if (param_1[0x85] != 0) {
    FUN_00485054(param_1);
  }
  if (param_1[0x82] != 0) {
    (**(code **)(*(int *)param_1[0x84] + 8))((int *)param_1[0x84],param_1[0x82]);
    FUN_00484e98(param_1,param_1[0x81]);
    FUN_00402f9c((int *)param_1[0x82]);
    param_1[0x82] = 0;
  }
  return;
}


