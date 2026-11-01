
/* ==== FUN_00419454 @ 00419454 ==== 
 * signature: undefined FUN_00419454(void)
 * body: 00419454-004194dc;004194f4-0041955a
 */

void FUN_00419454(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_70;
  code *pcStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  code *pcStack_60;
  code *pcStack_5c;
  uint *puStack_4c;
  byte bStack_48;
  undefined1 auStack_47 [63];
  int *piStack_8;
  
  pcStack_5c = (code *)&stack0xfffffffc;
  puStack_4c = (uint *)0x0;
  pcStack_60 = thunk_FUN_00403434;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  piStack_68 = (int *)0x419483;
  (**(code **)(*param_2 + 4))(param_2,&bStack_48,1);
  piStack_68 = (int *)0x419492;
  (**(code **)(*param_2 + 4))(param_2,auStack_47,bStack_48);
  piStack_68 = (int *)0x41949d;
  FUN_00403bdc((int *)&puStack_4c,&bStack_48);
  piStack_68 = (int *)0x4194aa;
  iVar1 = FUN_00418f98(DAT_004465b8,puStack_4c);
  piStack_8 = (int *)0x0;
  if (iVar1 != 0) {
    piStack_68 = (int *)0x4194b8;
    piStack_8 = (int *)(**(code **)(iVar1 + 0xc))(iVar1,1);
    pcStack_6c = thunk_FUN_00403180;
    uStack_70 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_70;
    piStack_68 = (int *)&stack0xfffffffc;
    (**(code **)(*piStack_8 + 0x30))(piStack_8,param_2);
    *in_FS_OFFSET = uStack_70;
  }
  piStack_68 = (int *)0x4194fc;
  FUN_00402d14((int *)param_1[1]);
  param_1[1] = (int)piStack_8;
  uVar2 = extraout_ECX;
  if (piStack_8 != (int *)0x0) {
    piStack_8[3] = (int)param_1;
    piStack_68 = piStack_8;
    pcStack_6c = (code *)0x41951a;
    iVar1 = FUN_00402f08(param_1,CONCAT22(extraout_var,0xfffd));
    piStack_68[2] = iVar1;
    piStack_8[5] = (int)param_1;
    piStack_68 = piStack_8;
    pcStack_6c = (code *)0x419532;
    iVar1 = FUN_00402f08(param_1,CONCAT22((short)((uint)iVar1 >> 0x10),0xfffc));
    piStack_68[4] = iVar1;
    uVar2 = extraout_ECX_00;
  }
  piStack_68 = (int *)0x419545;
  FUN_00402ef0(param_1,param_1,uVar2);
  *in_FS_OFFSET = uStack_64;
  pcStack_5c = FUN_00419562;
  pcStack_60 = (code *)0x41955a;
  FUN_004039b8((int *)&puStack_4c);
  return;
}


