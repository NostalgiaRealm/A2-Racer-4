
/* ==== FUN_0041c150 @ 0041c150 ==== 
 * signature: undefined __fastcall FUN_0041c150(void * param_1)
 * body: 0041c150-0041c4c6
 */

void __fastcall FUN_0041c150(void *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  switch(*(undefined4 *)((int)param_1 + 0x1d8)) {
  case 1:
    uVar3 = FUN_0041c6d0((void *)((int)param_1 + 0x10),(undefined4 *)((int)param_1 + 0x1cc));
    if ((char)uVar3 != '\0') {
      FUN_0041c0f0();
      *(undefined4 *)((int)param_1 + 0x1d8) = 2;
      return;
    }
    break;
  case 2:
    bVar4 = FUN_0041c790((int)param_1 + 0x10);
    if (bVar4) {
      return;
    }
    *(undefined4 *)((int)param_1 + 0x1d8) = 3;
    return;
  case 3:
    uVar3 = FUN_0041c6d0(param_1,(undefined4 *)((int)param_1 + 0x1cc));
    if ((char)uVar3 != '\0') {
      FUN_0041c0f0();
      *(undefined4 *)((int)param_1 + 0x1d8) = 4;
      return;
    }
    break;
  case 4:
    bVar4 = FUN_0041c790((int)param_1);
    if (bVar4) {
      return;
    }
    *(undefined4 *)((int)param_1 + 0x1d8) = 5;
    return;
  case 5:
    uVar3 = FUN_0041c720((void *)((int)param_1 + 0x30),*(uint *)((int)param_1 + 0x1d0),
                         (undefined4 *)((int)param_1 + 0x1cc));
    if ((char)uVar3 != '\0') {
      FUN_0041c0f0();
      *(undefined4 *)((int)param_1 + 0x1d8) = 6;
      return;
    }
    break;
  case 6:
    bVar4 = FUN_0041c790((int)param_1 + 0x30);
    if (bVar4) {
      return;
    }
    *(undefined4 *)((int)param_1 + 0x1d8) = 7;
    return;
  case 7:
    pvVar1 = (void *)((int)param_1 + 0x20);
    goto LAB_0041c33b;
  case 8:
    iVar2 = FUN_0043a5b0();
    *(int *)((int)param_1 + 0x1cc) = iVar2;
    bVar4 = iVar2 == -1;
    goto LAB_0041c342;
  case 9:
    iVar2 = FUN_0043a5e0();
    *(int *)((int)param_1 + 0x1cc) = iVar2;
    bVar4 = iVar2 == -1;
    goto LAB_0041c342;
  case 10:
    iVar2 = FUN_0049eb50(&DAT_006fbb5c,*(int *)((int)param_1 + 0x1cc));
    uVar3 = FUN_0049e630(iVar2);
    if (uVar3 != 0) {
      return;
    }
    break;
  case 0xb:
    uVar3 = FUN_0041c6d0((void *)((int)param_1 + 0x40),(undefined4 *)((int)param_1 + 0x1cc));
    if ((char)uVar3 != '\0') {
      FUN_0041c0f0();
      *(undefined4 *)((int)param_1 + 0x1d8) = 0xc;
      return;
    }
    break;
  case 0xc:
    bVar4 = FUN_0041c790((int)param_1 + 0x40);
    if (bVar4) {
      return;
    }
    *(undefined4 *)((int)param_1 + 0x1d8) = 0xd;
    return;
  case 0xd:
    uVar3 = FUN_0041c6d0((void *)((int)param_1 + 0x50),(undefined4 *)((int)param_1 + 0x1cc));
    if ((char)uVar3 != '\0') {
      FUN_0041c0f0();
      *(undefined4 *)((int)param_1 + 0x1d8) = 10;
      return;
    }
    break;
  case 0xe:
    iVar2 = FUN_004072b0(DAT_006fba58);
    if (iVar2 != -1) {
      uVar3 = FUN_0041c610((void *)((int)param_1 + 0x60),(int *)((int)param_1 + 0x1cc));
      if ((char)uVar3 != '\0') {
        FUN_0041c0f0();
        FUN_00450c90(iVar2,*(int *)((int)param_1 + 0x1cc),0);
        *(undefined4 *)((int)param_1 + 0x1d8) = 10;
        return;
      }
      break;
    }
    pvVar1 = (void *)((int)param_1 + 0x60);
LAB_0041c33b:
    uVar3 = FUN_0041c6d0(pvVar1,(undefined4 *)((int)param_1 + 0x1cc));
    bVar4 = (char)uVar3 == '\0';
LAB_0041c342:
    if (!bVar4) {
      FUN_0041c0f0();
      *(undefined4 *)((int)param_1 + 0x1d8) = 10;
      return;
    }
    break;
  case 0xf:
    uVar3 = FUN_0041c6d0(*(void **)((int)param_1 + 0x70),(undefined4 *)((int)param_1 + 0x1cc));
    if ((char)uVar3 != '\0') {
      *(undefined4 *)((int)param_1 + 0x1d8) = 0x10;
      return;
    }
    break;
  case 0x10:
    bVar4 = FUN_0041c790(*(int *)((int)param_1 + 0x70));
    bVar4 = !bVar4;
    goto LAB_0041c4b3;
  case 0x11:
    uVar3 = FUN_0041c6d0(*(void **)((int)param_1 + 0x74),(undefined4 *)((int)param_1 + 0x1cc));
    if ((char)uVar3 != '\0') {
      *(undefined4 *)((int)param_1 + 0x1d8) = 0x12;
      return;
    }
    break;
  case 0x12:
  case 0x16:
    bVar4 = FUN_0041c790(*(int *)((int)param_1 + 0x74));
    bVar4 = !bVar4;
    goto LAB_0041c4b3;
  case 0x13:
    uVar3 = FUN_0041c610(*(void **)((int)param_1 + 0x78),(int *)((int)param_1 + 0x1cc));
    if ((char)uVar3 != '\0') {
      iVar2 = FUN_00412c60();
      if (iVar2 == -1) {
        return;
      }
      *(undefined4 *)((int)param_1 + 0x1d8) = 0x14;
      FUN_00450c90(iVar2,*(int *)((int)param_1 + 0x1cc),0);
      return;
    }
    break;
  case 0x14:
    bVar4 = FUN_0041c790(*(int *)((int)param_1 + 0x78));
    bVar4 = !bVar4;
    goto LAB_0041c4b3;
  case 0x15:
    uVar3 = FUN_0041c6d0(*(void **)((int)param_1 + 0x74),(undefined4 *)((int)param_1 + 0x1cc));
    if ((char)uVar3 != '\0') {
      *(undefined4 *)((int)param_1 + 0x1d8) = 0x16;
      return;
    }
    break;
  case 0x17:
    iVar2 = 0;
    pvVar1 = (void *)FUN_0049eb50(&DAT_006fbb5c,*(int *)((int)param_1 + 0x1cc));
    FUN_0049e550(pvVar1,iVar2);
    *(undefined4 *)((int)param_1 + 0x1d8) = 0x18;
    return;
  case 0x18:
    iVar2 = FUN_0049eb50(&DAT_006fbb5c,*(int *)((int)param_1 + 0x1cc));
    uVar3 = FUN_0049e630(iVar2);
    bVar4 = uVar3 == 0;
LAB_0041c4b3:
    if (!bVar4) {
      return;
    }
    *(undefined4 *)((int)param_1 + 0x1d8) = 10;
    return;
  }
  FUN_0041c0d0((int)param_1);
  return;
}


