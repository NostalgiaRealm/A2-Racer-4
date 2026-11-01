
/* ==== FUN_004e7a4a @ 004e7a4a ==== 
 * signature: undefined1 * __fastcall FUN_004e7a4a(uint param_1, uint * param_2, char param_3)
 * body: 004e7a4a-004e7a4b
 */

/* WARNING: Instruction at (ram,0x004e7aad) overlaps instruction at (ram,0x004e7aac)
    */

undefined1 * __fastcall FUN_004e7a4a(uint param_1,uint *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined1 *this;
  uint uVar4;
  byte bVar5;
  uint in_EAX;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  uint *puVar9;
  uint *puVar10;
  char *pcVar11;
  uint *unaff_EDI;
  char *pcVar12;
  uint *unaff_retaddr;
  
  bVar5 = (char)(in_EAX & 0xffffff7a) + (char)(param_1 >> 8);
  uVar7 = (uint)bVar5;
  if ((char)bVar5 < '\0') {
    *unaff_EBX = *unaff_EBX + (char)((uint)unaff_EBX >> 8);
    if (*unaff_EBX < '\0') {
      *(char *)(unaff_EBP + 0x79) = *(char *)(unaff_EBP + 0x79) + (char)((in_EAX & 0xffffff7a) >> 8)
      ;
      puVar9 = (uint *)(unaff_ESI + -2);
      *(char *)puVar9 = *(char *)puVar9 + (char)param_2;
      if ((POPCOUNT(*(char *)puVar9) & 1U) == 0) {
        param_2 = unaff_EDI + 1;
        puVar10 = (uint *)(unaff_ESI + 2);
        *unaff_EDI = *puVar9;
        goto code_r0x004e7aae;
      }
      *(char *)(unaff_EBP + -0x75) = *(char *)(unaff_EBP + -0x75) + (char)param_2;
      in((short)param_2);
      iVar2 = *(int *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00559400();
      puVar9 = *(uint **)(iVar2 + 4);
      *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffff0;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)&DAT_0057629c;
      }
      param_1 = 0xffffffff;
      do {
        param_2 = (uint *)&stack0xfffffff0;
        unaff_EDI = puVar9;
        if (param_1 == 0) break;
        param_1 = param_1 - 1;
        unaff_EDI = (uint *)((int)puVar9 + 1);
        uVar7 = *puVar9;
        param_2 = (uint *)&stack0xfffffff0;
        puVar9 = unaff_EDI;
      } while ((char)uVar7 != '\0');
      goto code_r0x004e7a9e;
    }
  }
  else {
code_r0x004e7a9e:
    uVar7 = ~param_1;
    unaff_EDI = (uint *)((int)unaff_EDI - uVar7);
    param_1 = uVar7;
    unaff_retaddr = param_2;
  }
  puVar10 = unaff_EDI;
  for (uVar8 = param_1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *param_2 = *puVar10;
    puVar10 = puVar10 + 1;
    param_2 = param_2 + 1;
  }
code_r0x004e7aae:
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)param_2 = (char)*puVar10;
    puVar10 = (uint *)((int)puVar10 + 1);
    param_2 = (uint *)((int)param_2 + 1);
  }
  puVar9 = FUN_00559b90(unaff_retaddr,param_3);
  while (puVar9 != (uint *)0x0) {
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_005b76b8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar7 - 1;
    uVar7 = 0xffffffff;
    puVar10 = puVar9;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      uVar4 = *puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
    } while ((char)uVar4 != '\0');
    *(char **)(unaff_EBP + -4) = (char *)(uVar8 + (int)puVar9);
    FUN_005580e0((undefined4 *)(uVar8 + (int)puVar9),(undefined4 *)((int)puVar9 + 1),~uVar7 - 1);
    puVar10 = (uint *)&DAT_005b76b8;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar3 = *(uint **)(unaff_EBP + -4);
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    puVar9 = FUN_00559b90(puVar3,'\\');
  }
  puVar9 = FUN_00559b90(*(uint **)(unaff_EBP + 0xc),'\"');
  while (puVar9 != (uint *)0x0) {
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_005b76b4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar7 - 1;
    uVar7 = 0xffffffff;
    puVar10 = puVar9;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      uVar4 = *puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
    } while ((char)uVar4 != '\0');
    *(char **)(unaff_EBP + -4) = (char *)(uVar8 + (int)puVar9);
    FUN_005580e0((undefined4 *)(uVar8 + (int)puVar9),(undefined4 *)((int)puVar9 + 1),~uVar7 - 1);
    puVar10 = (uint *)&DAT_005b76b4;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar3 = *(uint **)(unaff_EBP + -4);
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    puVar9 = FUN_00559b90(puVar3,'\"');
  }
  puVar9 = FUN_00559b90(*(uint **)(unaff_EBP + 0xc),'\n');
  while (puVar9 != (uint *)0x0) {
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_005b76b0;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar7 - 1;
    uVar7 = 0xffffffff;
    puVar10 = puVar9;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      uVar4 = *puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
    } while ((char)uVar4 != '\0');
    *(char **)(unaff_EBP + -4) = (char *)(uVar8 + (int)puVar9);
    FUN_005580e0((undefined4 *)(uVar8 + (int)puVar9),(undefined4 *)((int)puVar9 + 1),~uVar7 - 1);
    puVar10 = (uint *)&DAT_005b76b0;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar3 = *(uint **)(unaff_EBP + -4);
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    puVar9 = FUN_00559b90(puVar3,'\n');
  }
  puVar9 = FUN_00559b90(*(uint **)(unaff_EBP + 0xc),'\t');
  while (puVar9 != (uint *)0x0) {
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_005b76ac;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar7 - 1;
    uVar7 = 0xffffffff;
    puVar10 = puVar9;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      uVar4 = *puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
    } while ((char)uVar4 != '\0');
    *(char **)(unaff_EBP + -4) = (char *)(uVar8 + (int)puVar9);
    FUN_005580e0((undefined4 *)(uVar8 + (int)puVar9),(undefined4 *)((int)puVar9 + 1),~uVar7 - 1);
    puVar10 = (uint *)&DAT_005b76ac;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar3 = *(uint **)(unaff_EBP + -4);
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    puVar9 = FUN_00559b90(puVar3,'\t');
  }
  puVar9 = FUN_00559b90(*(uint **)(unaff_EBP + 0xc),'\r');
  while (puVar9 != (uint *)0x0) {
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_005b76a8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar7 - 1;
    uVar7 = 0xffffffff;
    puVar10 = puVar9;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      uVar4 = *puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
    } while ((char)uVar4 != '\0');
    *(char **)(unaff_EBP + -4) = (char *)(uVar8 + (int)puVar9);
    FUN_005580e0((undefined4 *)(uVar8 + (int)puVar9),(undefined4 *)((int)puVar9 + 1),~uVar7 - 1);
    puVar10 = (uint *)&DAT_005b76a8;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar3 = *(uint **)(unaff_EBP + -4);
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar9 = (char)*puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    puVar9 = FUN_00559b90(puVar3,'\r');
  }
  this = *(undefined1 **)(unaff_EBP + 8);
  pcVar11 = *(char **)(unaff_EBP + 0xc);
  *this = *(undefined1 *)(unaff_EBP + 0xf);
  uVar7 = 0xffffffff;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  pcVar12 = pcVar11;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  *(uint *)(unaff_EBP + 0xc) = uVar7;
  uVar6 = FUN_00402a00(this,uVar7,'\x01');
  if ((char)uVar6 != '\0') {
    pcVar12 = *(char **)(this + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    *(uint *)(this + 8) = uVar7;
    *(undefined1 *)(*(int *)(this + 4) + uVar7) = 0;
  }
  return this;
}


