
/* ==== TControl.vmt_07c @ 00423ea0 ==== 
 * signature: undefined __register TControl.vmt_07c(int * param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 00423ea0-00423f35
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_07c(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  cVar1 = FUN_00425c54(param_1,&param_5,&param_4);
  if ((cVar1 != '\0') &&
     ((((param_2 != param_1[0xc] || (param_3 != param_1[0xd])) || (param_5 != param_1[0xe])) ||
      (param_4 != param_1[0xf])))) {
    FUN_00424c10((int)param_1,*(char *)((int)param_1 + 0x47),'\0');
    param_1[0xc] = param_2;
    param_1[0xd] = param_3;
    param_1[0xe] = param_5;
    param_1[0xf] = param_4;
    FUN_00423f38((int)param_1);
    (**(code **)(*param_1 + 0x74))();
    FUN_00425780((int)param_1,0x47,0,0);
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      FUN_00402ef0(param_1,extraout_EDX_00,extraout_ECX_00);
    }
  }
  return;
}


