
/* ==== TTarga.vmt_054 @ 0045913c ==== 
 * signature: undefined TTarga.vmt_054(void)
 * body: 0045913c-00459384
 * note: Name source: Delphi VMT slot
 */

/* WARNING: Removing unreachable block (ram,0x004592a9) */
/* Name source: Delphi VMT slot */

void TTarga_vmt_054(int *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_EDX;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  char *pcStack_148;
  code *pcStack_144;
  code *pcStack_140;
  int iStack_130;
  int iStack_12c;
  byte abStack_128 [256];
  int iStack_28;
  int iStack_24;
  char acStack_20 [12];
  ushort uStack_14;
  ushort uStack_12;
  byte bStack_10;
  undefined1 uStack_f;
  undefined2 uStack_e;
  int iStack_c;
  int *piStack_8;
  
  pcStack_140 = (code *)&stack0xfffffffc;
  iStack_12c = 0;
  iStack_130 = 0;
  iStack_24 = 0;
  iStack_28 = 0;
  pcStack_144 = thunk_FUN_004036bc;
  pcStack_148 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_148;
  piStack_8 = param_2;
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    if ((param_1[0xf] != 0x18) && (param_1[0xf] != 0x20)) {
      FUN_00402ee4(*param_1,abStack_128);
      FUN_00403e80(&iStack_28,abStack_128);
      FUN_00403f9c(&iStack_24,4);
      FUN_00403c40(iStack_24);
    }
    if ((param_1[0xf] == 0x18) || (param_1[0xf] == 0x20)) {
      FUN_00407090((undefined4 *)acStack_20,0x12);
      uVar2 = FUN_00403edc(param_1[0x132]);
      if (0xff < uVar2) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      acStack_20[0] = (char)uVar2;
      acStack_20[1] = 0;
      acStack_20[2] = 2;
      uVar2 = param_1[0x23];
      if (0xffff < uVar2) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      uStack_14 = (ushort)uVar2;
      uVar2 = param_1[0x10];
      if (0xffff < uVar2) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      uStack_12 = (ushort)uVar2;
      uVar2 = param_1[0xf];
      if (0xff < uVar2) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      bStack_10 = (byte)uVar2;
      uStack_f = 0x20;
      (**(code **)(*piStack_8 + 8))(piStack_8,acStack_20,0x12);
      if (acStack_20[0] != '\0') {
        uVar2 = FUN_004040ac(param_1 + 0x132);
        iVar4 = 0;
        if (*(int *)(uVar2 - 4) == 0) {
          uVar2 = thunk_FUN_00402808(uVar2);
          iVar4 = extraout_EDX;
        }
        (**(code **)(*piStack_8 + 8))(piStack_8,uVar2 + iVar4,acStack_20[0]);
      }
      uVar2 = (uint)(bStack_10 >> 3) * (uint)uStack_14;
      if (0xffff < uVar2) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      uStack_e = (undefined2)uVar2;
      uVar2 = uVar2 & 0xffff;
      if (param_1[0x24] < (int)uVar2) {
        FUN_00402ee4(*param_1,abStack_128);
        FUN_00403e80(&iStack_130,abStack_128);
        pcStack_148 = "Targa destination image is larger than DIB";
        FUN_00403f9c(&iStack_12c,4);
        uVar2 = FUN_00403c40(iStack_12c);
      }
      uVar5 = (uint)uStack_12;
      if (SBORROW4(uVar5,1)) {
        thunk_FUN_00402808(uVar2);
      }
      if (-1 < (int)(uVar5 - 1)) {
        iStack_c = 0;
        do {
          uVar3 = FUN_00456950(param_1,iStack_c);
          (**(code **)(*piStack_8 + 8))(piStack_8,uVar3,uStack_e);
          iStack_c = iStack_c + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
  }
  *in_FS_OFFSET = pcStack_148;
  pcStack_140 = FUN_0045938c;
  pcStack_144 = (code *)0x459377;
  FUN_00403c80(&iStack_130,2);
  pcStack_144 = (code *)0x459384;
  FUN_00403c80(&iStack_28,2);
  return;
}


