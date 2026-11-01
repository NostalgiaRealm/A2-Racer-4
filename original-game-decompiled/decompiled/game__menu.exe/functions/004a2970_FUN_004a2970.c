
/* ==== FUN_004a2970 @ 004a2970 ==== 
 * signature: undefined __register FUN_004a2970(int * param_1)
 * body: 004a2970-004a2bba
 */

void FUN_004a2970(int *param_1)

{
  char cVar1;
  MCIERROR MVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  code *pcStack_3c;
  code *pcStack_38;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined2 local_14;
  undefined *local_10;
  undefined *local_c;
  
  pcStack_38 = (code *)&stack0xfffffffc;
  local_2c = (undefined4 *)0x0;
  pcStack_3c = thunk_FUN_004036bc;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  FUN_00402c30(&local_18,0x14,0);
  if (*(char *)((int)param_1 + 0x2c9) != '\0') {
    FUN_004a2bd0(param_1,extraout_EDX,extraout_ECX);
  }
  local_18 = 0;
  local_10 = (&PTR_DAT_004ab588)[*(byte *)(param_1 + 0xb7)];
  local_c = FUN_004040a0((undefined *)param_1[0xc0]);
  param_1[0xb4] = 0;
  if (*(char *)((int)param_1 + 0x2d6) == '\0') {
    param_1[0xb4] = 2;
  }
  else {
    if ((char)param_1[0xb5] != '\0') {
      param_1[0xb4] = 2;
    }
    *(undefined1 *)((int)param_1 + 0x2d6) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d7) != '\0') {
    if (*(char *)((int)param_1 + 0x2d5) != '\0') {
      param_1[0xb4] = param_1[0xb4] | 1;
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 0;
  }
  if ((char)param_1[0xb7] == '\0') {
    param_1[0xb4] = param_1[0xb4] | 0x200;
  }
  else {
    param_1[0xb4] = param_1[0xb4] | 0x2000;
  }
  if (*(char *)((int)param_1 + 0x307) != '\0') {
    param_1[0xb4] = param_1[0xb4] | 0x100;
  }
  local_18 = FUN_004349e0(param_1);
  MVar2 = mciSendCommandA(0,0x803,param_1[0xb4],(DWORD_PTR)&local_18);
  param_1[0xbb] = MVar2;
  if (MVar2 == 0) {
    *(undefined1 *)((int)param_1 + 0x2c9) = 1;
    *(undefined2 *)((int)param_1 + 0x2da) = local_14;
    iVar4 = FUN_004a3ac8((int)param_1);
    param_1[0xba] = iVar4 / 10;
    FUN_004a3930((int)param_1);
    if (*(char *)((int)param_1 + 0x2cf) != '\0') {
      TMediaPlayer_set_Display((int)param_1,(int *)param_1[0xbd]);
      FUN_004a38d8((int)param_1,&local_28);
      param_1[0xbe] = local_20 - local_28;
      param_1[0xbf] = local_1c - local_24;
    }
    if (((char)param_1[0xb7] == '\x02') || ((char)param_1[0xb7] == '\v')) {
      FUN_004a36e4((int)param_1,10);
    }
    *(undefined2 *)((int)param_1 + 0x28e) = 0x18;
    if ((char)param_1[0xb3] != '\0') {
      *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) | 0x60;
    }
    if (*(char *)((int)param_1 + 0x2cb) != '\0') {
      *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) | 1;
    }
    if (*(char *)((int)param_1 + 0x2ce) != '\0') {
      *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) | 0x80;
    }
    if (*(char *)((int)param_1 + 0x2cd) != '\0') {
      *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) | 0x100;
    }
    cVar1 = FUN_004a3b58((int)param_1);
    if (cVar1 == '\x02') {
      FUN_00403178(param_1,0,extraout_ECX_00);
    }
    FUN_004a1ca0(param_1);
  }
  else {
    FUN_004a3c24((int)param_1,(int *)&local_2c);
    piVar3 = FUN_0040b5d8((int *)&DAT_004a138c,'\x01',local_2c);
    FUN_004036f4(piVar3);
  }
  *in_FS_OFFSET = uStack_40;
  pcStack_38 = FUN_004a2bc2;
  pcStack_3c = (code *)0x4a2bba;
  FUN_00403c5c((int *)&local_2c);
  return;
}


