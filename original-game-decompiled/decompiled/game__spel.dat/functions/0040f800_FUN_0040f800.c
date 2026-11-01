
/* ==== FUN_0040f800 @ 0040f800 ==== 
 * signature: void * __thiscall FUN_0040f800(void * this, uint param_1, uint param_2)
 * body: 0040f800-0040f916
 */

void * __thiscall FUN_0040f800(void *this,uint param_1,uint param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (*(uint *)((int)this + 8) < param_1) {
    FUN_0054b29c();
  }
  pcVar7 = *(char **)((int)this + 4);
  if (((pcVar7 != (char *)0x0) && (cVar1 = pcVar7[-1], cVar1 != '\0')) && (cVar1 != -1)) {
    pcVar7[-1] = cVar1 + -1;
    uVar4 = 0xffffffff;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    pcVar8 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar3 = FUN_00402a00(this,uVar4,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar8 = *(char **)((int)this + 4);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_004029e0(this,uVar4);
    }
  }
  uVar4 = *(int *)((int)this + 8) - param_1;
  if (uVar4 < param_2) {
    param_2 = uVar4;
  }
  if (param_2 == 0) {
    return this;
  }
  puVar6 = (undefined4 *)(*(int *)((int)this + 4) + param_1);
  FUN_005580e0(puVar6,(undefined4 *)((int)puVar6 + param_2),uVar4 - param_2);
  uVar4 = *(int *)((int)this + 8) - param_2;
  if (0xfffffffd < uVar4) {
    FUN_0054b1b4();
  }
  puVar2 = *(undefined1 **)((int)this + 4);
  if (((puVar2 == (undefined1 *)0x0) || (cVar1 = puVar2[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      if (puVar2 == (undefined1 *)0x0) {
        return this;
      }
      *(undefined4 *)((int)this + 8) = 0;
      *puVar2 = 0;
      return this;
    }
    if (uVar4 <= *(uint *)((int)this + 0xc)) goto LAB_0040f904;
  }
  else if (uVar4 == 0) {
    puVar2[-1] = cVar1 + -1;
    FUN_004028f0(this,'\0');
    return this;
  }
  FUN_00402b20(uVar4);
LAB_0040f904:
  *(uint *)((int)this + 8) = uVar4;
  *(undefined1 *)(uVar4 + *(int *)((int)this + 4)) = 0;
  return this;
}


