
/* ==== FUN_0047c9a0 @ 0047c9a0 ==== 
 * signature: undefined1 * __cdecl FUN_0047c9a0(undefined1 * param_1, undefined1 * param_2, int param_3)
 * body: 0047c9a0-0047cacf
 */

undefined1 * __cdecl FUN_0047c9a0(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056bb58;
  pvStack_c = ExceptionList;
  local_1c[0] = *param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  FUN_004093c0(local_1c,param_2,0,0xffffffff);
  local_4 = 0;
  uVar5 = 0xffffffff;
  if (*(uint *)(param_3 + 8) != 0xffffffff) {
    uVar5 = *(uint *)(param_3 + 8);
  }
  if (-local_14 - 1 <= uVar5) {
    FUN_0054b1b4();
  }
  if (uVar5 != 0) {
    uVar1 = local_14 + uVar5;
    uVar3 = FUN_00402a00(local_1c,uVar1,'\0');
    if ((char)uVar3 != '\0') {
      puVar6 = *(undefined4 **)(param_3 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = (undefined4 *)(local_14 + local_18);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)(local_18 + uVar1) = 0;
      local_14 = uVar1;
    }
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(param_1,local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(local_18 + -1) = cVar2 + -1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = pvStack_c;
  return param_1;
}


