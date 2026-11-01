
/* ==== FUN_00472419 @ 00472419 ==== 
 * signature: undefined4 * __stdcall FUN_00472419(int param_1)
 * body: 00472419-0047241f
 */

/* WARNING: Removing unreachable block (ram,0x00472469) */
/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_00472419(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  void *this;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056b385;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar3 = (undefined1 *)FUN_00472920(param_1);
  uStack_1c._0_1_ = *puVar3;
  puStack_18 = (undefined4 *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  uVar2 = *(uint *)(puVar3 + 8);
  if (&uStack_1c == (undefined4 *)puVar3) {
    FUN_0040f800(&uStack_1c,uVar2,0xffffffff);
    FUN_0040f800(&uStack_1c,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar4 = *(undefined1 **)(puVar3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(&uStack_1c,'\x01');
        puStack_18 = *(undefined4 **)(puVar3 + 4);
        if (puStack_18 == (undefined4 *)0x0) {
          puStack_18 = (undefined4 *)&DAT_0057629c;
        }
        uStack_14 = *(undefined4 *)(puVar3 + 8);
        uStack_10 = *(undefined4 *)(puVar3 + 0xc);
        *(char *)((int)puStack_18 + -1) = *(char *)((int)puStack_18 + -1) + '\x01';
        goto LAB_00472517;
      }
    }
    uVar5 = FUN_00402a00(&uStack_1c,uVar2,'\x01');
    if ((char)uVar5 != '\0') {
      puVar6 = *(undefined4 **)(puVar3 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = puStack_18;
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar7 = uVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_004029e0(&uStack_1c,uVar2);
    }
  }
LAB_00472517:
  uStack_4 = 0;
  this = operator_new(0x1c);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  if (this == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar5 = FUN_004723f0(param_1);
    puVar6 = FUN_00472360(this,&uStack_1c,uVar5);
  }
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
  return puVar6;
}


