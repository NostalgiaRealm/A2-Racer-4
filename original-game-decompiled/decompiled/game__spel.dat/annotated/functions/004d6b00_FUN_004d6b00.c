
/* ==== FUN_004d6b00 @ 004d6b00 ==== 
 * signature: undefined1 * __thiscall FUN_004d6b00(void * this, undefined1 * param_1)
 * body: 004d6b00-004d6c5c
 */

/* WARNING: Removing unreachable block (ram,0x004d6b98) */

undefined1 * __thiscall FUN_004d6b00(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570183;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  uVar1 = *param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)this = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_004093c0(this,param_1,0,0xffffffff);
  local_4 = 0;
  *(undefined1 *)((int)this + 0x10) = param_1[0x10];
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_004093c0((undefined1 *)((int)this + 0x10),param_1 + 0x10,0,0xffffffff);
  puVar3 = (undefined1 *)((int)this + 0x20);
  local_4 = CONCAT31(local_4._1_3_,1);
  *puVar3 = param_1[0x20];
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  uVar2 = *(uint *)(param_1 + 0x28);
  if (puVar3 == param_1 + 0x20) {
    FUN_0040f800(puVar3,uVar2,0xffffffff);
    FUN_0040f800(puVar3,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar5 = *(undefined1 **)(param_1 + 0x24);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(puVar3,'\x01');
        puVar3 = *(undefined1 **)(param_1 + 0x24);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x24) = puVar3;
        *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_004d6c3c;
      }
    }
    uVar4 = FUN_00402a00(puVar3,uVar2,'\x01');
    if ((char)uVar4 != '\0') {
      puVar7 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(param_1 + 0x24);
      }
      puVar8 = *(undefined4 **)((int)this + 0x24);
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
      FUN_004029e0(puVar3,uVar2);
    }
  }
LAB_004d6c3c:
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *unaff_FS_OFFSET = local_c;
  return this;
}


