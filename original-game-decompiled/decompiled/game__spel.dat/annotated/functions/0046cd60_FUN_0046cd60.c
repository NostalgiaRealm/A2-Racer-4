
/* ==== FUN_0046cd60 @ 0046cd60 ==== 
 * signature: undefined1 * __stdcall FUN_0046cd60(undefined1 * param_1, LPCSTR param_2)
 * body: 0046cd60-0046cdb0;0046cdb4-0046cec7
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046cdb1-0046cdb3
 */

/* WARNING: Removing unreachable block (ram,0x0046cde8) */

undefined1 * FUN_0046cd60(undefined1 *param_1,LPCSTR param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056ad2d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = read_ini_value_setting(s_Input_005a855c,param_2);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Value_not_found__Field___005a8588);
  }
  FUN_00469ff0(local_1c,iVar2);
  uStack_4 = 0;
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1 == local_1c) {
    FUN_0040f800(param_1,uStack_14,0xffffffff);
    FUN_0040f800(param_1,0,0);
  }
  else {
    if (uStack_14 != 0) {
      puVar3 = puStack_18;
      if (puStack_18 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)&DAT_0057629c;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_004028f0(param_1,'\x01');
        puVar3 = puStack_18;
        if (puStack_18 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)&DAT_0057629c;
        }
        *(undefined4 **)(param_1 + 4) = puVar3;
        *(uint *)(param_1 + 8) = uStack_14;
        *(undefined4 *)(param_1 + 0xc) = uStack_10;
        *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
        goto LAB_0046ce8d;
      }
    }
    uVar4 = FUN_00402a00(param_1,uStack_14,'\x01');
    if ((char)uVar4 != '\0') {
      puVar3 = puStack_18;
      if (puStack_18 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)&DAT_0057629c;
      }
      puVar6 = *(undefined4 **)(param_1 + 4);
      for (uVar5 = uStack_14 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uStack_14 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_004029e0(param_1,uStack_14);
    }
  }
LAB_0046ce8d:
  if (puStack_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((undefined1 *)((int)puStack_18 + -1));
    }
    else {
      *(char *)((int)puStack_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}


