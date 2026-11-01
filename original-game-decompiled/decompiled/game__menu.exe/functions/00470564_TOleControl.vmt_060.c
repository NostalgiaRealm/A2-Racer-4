
/* ==== TOleControl.vmt_060 @ 00470564 ==== 
 * signature: undefined TOleControl.vmt_060(void)
 * body: 00470564-004705c8;004705d6-00470633
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleControl_vmt_060(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  code *pcStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  int iStack_c;
  int *piStack_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  iStack_c = 0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piStack_28 = (int *)0x47058f;
  piStack_8 = param_1;
  TControl_vmt_060(param_1,param_2,0);
  if (param_2 != (int *)0x0) {
    pcStack_2c = thunk_FUN_00403408;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    piStack_28 = (int *)&stack0xfffffffc;
    FUN_00405860(&iStack_c);
    iVar3 = (**(code **)(*(int *)piStack_8[0x80] + 0x10))();
    piVar2 = piStack_28;
    uVar1 = uStack_30;
    *in_FS_OFFSET = uStack_30;
    if ((iVar3 != 0) || (iStack_c == 0)) {
      piStack_28 = piStack_8;
      if (piStack_8 != (int *)0x0) {
        piStack_28 = piStack_8 + 0x94;
      }
      pcStack_2c = (code *)piStack_8[0x80];
      uStack_30 = 0x4705fc;
      uVar4 = (**(code **)(*(int *)pcStack_2c + 0xc))(*(int *)pcStack_2c,uVar1,piVar2);
      piStack_28 = (int *)0x470601;
      FUN_0046c2c0(uVar4);
    }
    if (piStack_8[0x82] != 0) {
      piStack_28 = (int *)0xffffffff;
      pcStack_2c = (code *)piStack_8[0x82];
      uStack_30 = 0x47061e;
      (**(code **)(*(int *)pcStack_2c + 0x14))();
    }
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0047063b;
  pcStack_20 = (code *)0x470633;
  FUN_00405860(&iStack_c);
  return;
}


