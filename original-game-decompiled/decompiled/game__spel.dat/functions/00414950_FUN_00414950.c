
/* ==== FUN_00414950 @ 00414950 ==== 
 * signature: undefined __cdecl FUN_00414950(char * param_1)
 * body: 00414950-00414bbd
 */

/* WARNING: Removing unreachable block (ram,0x00414a86) */

void __cdecl FUN_00414950(char *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  ulonglong uVar10;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  undefined1 local_40 [4];
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049e180(&local_68);
  local_4 = 0;
  uVar1 = (&DAT_005d1ba8)[(int)param_1 * 0xe];
  fVar9 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005d1bc8 + (int)param_1 * 0x38) =
       (float)(fVar9 + (float10)*(float *)(&DAT_005d1bc8 + (int)param_1 * 0x38));
  FUN_00414910(param_1);
  uVar2 = FUN_004230d0(uVar1);
  uVar10 = FUN_00423210(uVar1);
  if ((((char)uVar10 != '\0') || ((char)uVar2 != '\0')) && (DAT_00592938 == -1)) {
    DAT_00592938 = *(int *)(uVar1 * 0xf0 + 0x30 + DAT_00715e50);
    *(int *)(uVar1 * 0xf0 + 0x30 + DAT_00715e50) = DAT_0059293c;
    goto LAB_00414b9b;
  }
  if (((*(int *)(uVar1 * 0xf0 + 0x30 + DAT_00715e50) != DAT_0059293c) || ((char)uVar2 != '\0')) ||
     ((char)uVar10 != '\0')) goto LAB_00414b9b;
  iVar3 = FUN_0049eb50(&DAT_006fbb5c,DAT_0059293c);
  local_64 = *(undefined4 *)(iVar3 + 4);
  local_60 = *(undefined4 *)(iVar3 + 8);
  local_5c = *(undefined4 *)(iVar3 + 0xc);
  local_58 = *(undefined4 *)(iVar3 + 0x10);
  local_54 = *(undefined4 *)(iVar3 + 0x14);
  FUN_004093c0(local_50,(void *)(iVar3 + 0x18),0,0xffffffff);
  uVar2 = *(uint *)(iVar3 + 0x30);
  if (local_40 == (undefined1 *)(iVar3 + 0x28)) {
    FUN_0040f800(local_40,uVar2,0xffffffff);
    FUN_0040f800(local_40,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar4 = *(undefined1 **)(iVar3 + 0x2c);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(local_40,'\x01');
        local_3c = *(undefined4 **)(iVar3 + 0x2c);
        if (local_3c == (undefined4 *)0x0) {
          local_3c = (undefined4 *)&DAT_0057629c;
        }
        local_38 = *(undefined4 *)(iVar3 + 0x30);
        local_34 = *(undefined4 *)(iVar3 + 0x34);
        *(char *)((int)local_3c + -1) = *(char *)((int)local_3c + -1) + '\x01';
        goto LAB_00414b38;
      }
    }
    uVar5 = FUN_00402a00(local_40,uVar2,'\x01');
    if ((char)uVar5 != '\0') {
      puVar7 = *(undefined4 **)(iVar3 + 0x2c);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = local_3c;
      for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_004029e0(local_40,uVar2);
    }
  }
LAB_00414b38:
  local_30 = *(undefined4 *)(iVar3 + 0x38);
  local_2c = *(undefined4 *)(iVar3 + 0x3c);
  local_28 = *(undefined4 *)(iVar3 + 0x40);
  local_24 = *(undefined4 *)(iVar3 + 0x44);
  local_20 = *(undefined4 *)(iVar3 + 0x48);
  local_1c = *(undefined4 *)(iVar3 + 0x4c);
  local_18 = *(undefined4 *)(iVar3 + 0x50);
  local_14 = *(undefined4 *)(iVar3 + 0x54);
  local_10 = *(undefined4 *)(iVar3 + 0x58);
  FUN_0049e570((int)&local_68);
  *(int *)(uVar1 * 0xf0 + 0x30 + DAT_00715e50) = DAT_00592938;
  DAT_00592938 = -1;
LAB_00414b9b:
  local_4 = 0xffffffff;
  FUN_0049e200(&local_68);
  ExceptionList = local_c;
  return;
}


