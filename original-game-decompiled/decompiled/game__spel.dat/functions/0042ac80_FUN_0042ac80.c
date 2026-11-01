
/* ==== FUN_0042ac80 @ 0042ac80 ==== 
 * signature: undefined __thiscall FUN_0042ac80(void * this, int * param_1)
 * body: 0042ac80-0042adb0
 */

/* WARNING: Removing unreachable block (ram,0x0042ac9f) */

void __thiscall FUN_0042ac80(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  
  this_00 = (int *)((int)this + 4);
  uVar7 = param_1[2];
  if (this_00 == param_1) {
    if (*(uint *)((int)this + 0xc) < uVar7) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_00);
    iVar1 = *(int *)((int)this + 0xc) - uVar7;
    iVar4 = -1;
    if (iVar1 != -1) {
      iVar4 = iVar1;
    }
    if (iVar4 != 0) {
      puVar5 = (undefined4 *)(*(int *)((int)this + 8) + uVar7);
      FUN_005580e0(puVar5,(undefined4 *)((int)puVar5 + iVar4),iVar1 - iVar4);
      uVar7 = *(int *)((int)this + 0xc) - iVar4;
      uVar2 = FUN_00402a00(this_00,uVar7,'\0');
      if ((char)uVar2 != '\0') {
        FUN_004029e0(this_00,uVar7);
      }
    }
    FUN_0040f800(this_00,0,0);
  }
  else {
    if (uVar7 != 0) {
      puVar3 = (undefined1 *)param_1[1];
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(this_00,'\x01');
        puVar3 = (undefined1 *)param_1[1];
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 8) = puVar3;
        *(int *)((int)this + 0xc) = param_1[2];
        *(int *)((int)this + 0x10) = param_1[3];
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_0042ad8c;
      }
    }
    uVar2 = FUN_00402a00(this_00,uVar7,'\x01');
    if ((char)uVar2 != '\0') {
      puVar5 = (undefined4 *)&DAT_0057629c;
      if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)param_1[1];
      }
      puVar8 = *(undefined4 **)((int)this + 8);
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_004029e0(this_00,uVar7);
    }
  }
LAB_0042ad8c:
  pcVar9 = (char *)param_1[1];
  if (pcVar9 == (char *)0x0) {
    pcVar9 = "";
  }
  iVar4 = FUN_004b75a0(&DAT_00712130,pcVar9);
  *(int *)this = iVar4;
  return;
}


