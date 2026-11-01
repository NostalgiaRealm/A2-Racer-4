
/* ==== TOleControl.vmt_018 @ 0047047c ==== 
 * signature: undefined TOleControl.vmt_018(void)
 * body: 0047047c-00470521
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleControl_vmt_018(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  uint *puStack_c;
  uint *puStack_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  puStack_8 = (uint *)0x0;
  puStack_c = (uint *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00403cf4((int *)&puStack_8,param_1[2]);
  TControl_vmt_018(param_1,param_2);
  if (param_1[0x82] != 0) {
    (**(code **)(*(int *)param_1[0x82] + 0x14))();
    if ((*(uint *)(param_1[0x7c] + 0x2c) & 0x30) != 0) {
      uVar2 = (*(uint *)(param_1[0x7c] + 0x2c) & 0x10) == 0;
      if ((bool)uVar2) {
        uVar1 = 0xfffffdfb;
      }
      else {
        uVar1 = 0xfffffdfa;
      }
      FUN_0046fe58(param_1,uVar1,(int *)&puStack_c);
      FUN_00403fec(puStack_8,puStack_c);
      if ((bool)uVar2) {
        FUN_004707ec(param_1,uVar1,(LPCSTR)param_2);
      }
    }
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00470529;
  pcStack_20 = (code *)0x470521;
  FUN_00403c80((int *)&puStack_c,2);
  return;
}


