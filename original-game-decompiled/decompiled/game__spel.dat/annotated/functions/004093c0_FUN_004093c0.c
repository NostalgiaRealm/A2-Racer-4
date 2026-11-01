
/* ==== FUN_004093c0 @ 004093c0 ==== 
 * signature: void * __thiscall FUN_004093c0(void * this, void * param_1, uint param_2, uint param_3)
 * body: 004093c0-004095bf
 */

void * __thiscall FUN_004093c0(void *this,void *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  if (*(uint *)((int)param_1 + 8) < param_2) {
    FUN_0054b29c();
  }
  uVar7 = *(uint *)((int)param_1 + 8) - param_2;
  if (param_3 < uVar7) {
    uVar7 = param_3;
  }
  if (this == param_1) {
    uVar7 = uVar7 + param_2;
    if (*(uint *)((int)this + 8) < uVar7) {
      FUN_0054b29c();
    }
    FUN_00402c30(this);
    iVar2 = *(int *)((int)this + 8) - uVar7;
    iVar8 = -1;
    if (iVar2 != -1) {
      iVar8 = iVar2;
    }
    if (iVar8 != 0) {
      puVar6 = (undefined4 *)(*(int *)((int)this + 4) + uVar7);
      FUN_005580e0(puVar6,(undefined4 *)((int)puVar6 + iVar8),iVar2 - iVar8);
      uVar7 = *(int *)((int)this + 8) - iVar8;
      uVar3 = FUN_00402a00(this,uVar7,'\0');
      if ((char)uVar3 != '\0') {
        *(uint *)((int)this + 8) = uVar7;
        *(undefined1 *)(uVar7 + *(int *)((int)this + 4)) = 0;
      }
    }
    FUN_00402c30(this);
    uVar7 = *(uint *)((int)this + 8);
    if (uVar7 < param_2) {
      param_2 = uVar7;
    }
    if (param_2 == 0) {
      return this;
    }
    FUN_005580e0(*(undefined4 **)((int)this + 4),
                 (undefined4 *)((int)*(undefined4 **)((int)this + 4) + param_2),uVar7 - param_2);
    uVar7 = *(int *)((int)this + 8) - param_2;
    uVar3 = FUN_00402a00(this,uVar7,'\0');
    if ((char)uVar3 == '\0') {
      return this;
    }
    FUN_004029e0(this,uVar7);
    return this;
  }
  if ((uVar7 != 0) && (uVar7 == *(uint *)((int)param_1 + 8))) {
    puVar4 = *(undefined1 **)((int)param_1 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      iVar8 = *(int *)((int)this + 4);
      if (iVar8 != 0) {
        cVar1 = *(char *)(iVar8 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(iVar8 + -1));
        }
        else {
          *(char *)(iVar8 + -1) = cVar1 + -1;
        }
      }
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      puVar4 = *(undefined1 **)((int)param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)((int)this + 4) = puVar4;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)param_1 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return this;
    }
  }
  uVar5 = FUN_004095c0();
  if (uVar5 < uVar7) {
    FUN_0054b1b4();
  }
  iVar8 = *(int *)((int)this + 4);
  if (((iVar8 == 0) || (cVar1 = *(char *)(iVar8 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar7 == 0) {
      FUN_004028f0(this,'\x01');
      return this;
    }
    if ((*(uint *)((int)this + 0xc) < 0x20) && (uVar7 <= *(uint *)((int)this + 0xc)))
    goto LAB_0040958c;
    FUN_004028f0(this,'\x01');
  }
  else if (uVar7 == 0) {
    *(char *)(iVar8 + -1) = cVar1 + -1;
    FUN_004028f0(this,'\0');
    return this;
  }
  FUN_00402b20(uVar7);
LAB_0040958c:
  puVar4 = *(undefined1 **)((int)param_1 + 4);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0057629c;
  }
  puVar6 = (undefined4 *)(puVar4 + param_2);
  puVar9 = *(undefined4 **)((int)this + 4);
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  *(uint *)((int)this + 8) = uVar7;
  *(undefined1 *)(uVar7 + *(int *)((int)this + 4)) = 0;
  return this;
}


