
/* ==== FUN_004d25a0 @ 004d25a0 ==== 
 * signature: undefined4 * __fastcall FUN_004d25a0(int param_1)
 * body: 004d25a0-004d271f
 */

/* WARNING: Removing unreachable block (ram,0x004d263b) */

undefined4 * __fastcall FUN_004d25a0(int param_1)

{
  undefined4 *this;
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056fc53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x2c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_1 + 4);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  FUN_004093c0(puVar2 + 1,(void *)(param_1 + 4),0,0xffffffff);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *puVar2 = &PTR_FUN_005777cc;
  puVar2[5] = uVar4;
  this = puVar2 + 6;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)this = *(undefined1 *)(param_1 + 0x18);
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  uVar1 = *(uint *)(param_1 + 0x20);
  if (this == (undefined4 *)(param_1 + 0x18)) {
    FUN_0040f800(this,uVar1,0xffffffff);
    FUN_0040f800(this,0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x1c);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(this,'\x01');
        puVar3 = *(undefined1 **)(param_1 + 0x1c);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        puVar2[7] = puVar3;
        puVar2[8] = *(undefined4 *)(param_1 + 0x20);
        puVar2[9] = *(undefined4 *)(param_1 + 0x24);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_004d26df;
      }
    }
    uVar4 = FUN_00402a00(this,uVar1,'\x01');
    if ((char)uVar4 != '\0') {
      puVar6 = *(undefined4 **)(param_1 + 0x1c);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = (undefined4 *)puVar2[7];
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_004029e0(this,uVar1);
    }
  }
LAB_004d26df:
  *puVar2 = &PTR_FUN_00577808;
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  *puVar2 = &PTR_FUN_0057781c;
  puVar2[10] = uVar4;
  ExceptionList = local_c;
  return puVar2;
}


