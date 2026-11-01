
/* ==== FUN_00469640 @ 00469640 ==== 
 * signature: undefined __thiscall FUN_00469640(void * this, byte * param_1)
 * body: 00469640-0046973f
 */

void __thiscall FUN_00469640(void *this,byte *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char local_40 [64];
  
  iVar2 = FUN_004c3d60(param_1,(uint *)0x0);
  if (*(int *)this != 0) {
    FUN_00469600(this);
  }
  pvVar3 = operator_new(iVar2 * 4);
  *(void **)this = pvVar3;
  FUN_004a6980((uint)(pvVar3 != (void *)0x0),(byte *)s__s___d__Could_not_allocate_nuber_005a794c);
  iVar6 = 0;
  if (iVar2 < 1) {
    *(int *)((int)this + 4) = iVar2;
    return;
  }
  do {
    FUN_004c3f10(iVar6,local_40,0x3f);
    uVar4 = 0xffffffff;
    pcVar7 = local_40;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    pvVar3 = operator_new(~uVar4);
    *(void **)(*(int *)this + iVar6 * 4) = pvVar3;
    FUN_004a6980((uint)(*(int *)(*(int *)this + iVar6 * 4) != 0),
                 (byte *)s__s___d__Could_not_allocate_name__005a79b8);
    uVar4 = 0xffffffff;
    pcVar7 = local_40;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar8 + -uVar4;
    pcVar8 = *(char **)(*(int *)this + iVar6 * 4);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    iVar6 = iVar6 + 1;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    if (iVar2 <= iVar6) {
      *(int *)((int)this + 4) = iVar2;
      return;
    }
  } while( true );
}


