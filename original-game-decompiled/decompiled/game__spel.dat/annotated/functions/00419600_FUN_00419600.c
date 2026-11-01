
/* ==== FUN_00419600 @ 00419600 ==== 
 * signature: undefined4 __cdecl FUN_00419600(int param_1)
 * body: 00419600-004198a7
 */

undefined4 __cdecl FUN_00419600(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  float *pfVar7;
  float10 fVar8;
  
  if (DAT_005d3110 == '\0') {
    if (DAT_005d3112 == '\0') {
      iVar2 = FUN_004c5e40(0x7a);
      if ((iVar2 != 0) && (DAT_006fb950 == 1)) {
        DAT_005d3110 = '\x01';
      }
      if (DAT_005d3111 == '\x01') {
        DAT_005d3112 = '\x01';
LAB_00419665:
        puVar5 = &DAT_005d2bc8;
        piVar6 = &DAT_005ce9e8;
        do {
          if (*piVar6 != -1) {
            iVar2 = *piVar6 * 0xf0;
            puVar1 = (undefined4 *)(iVar2 + 0xbc + DAT_00715e50);
            *puVar5 = *puVar1;
            puVar5[1] = puVar1[1];
            puVar5[2] = puVar1[2];
            *puVar1 = 0;
            *(undefined4 *)(iVar2 + 0xc0 + DAT_00715e50) = 0;
            *(undefined4 *)(iVar2 + 0xc4 + DAT_00715e50) = 0;
            *(undefined4 *)(iVar2 + 200 + DAT_00715e50) = 0;
            *(undefined4 *)(iVar2 + 0xcc + DAT_00715e50) = 0;
            *(undefined4 *)(iVar2 + 0xd0 + DAT_00715e50) = 0;
          }
          piVar6 = piVar6 + 0xa5;
          puVar5 = puVar5 + 3;
        } while ((int)piVar6 < 0x5d1ae4);
      }
      else if ((DAT_005d3112 == '\x01') || (DAT_005d3110 == '\x01')) goto LAB_00419665;
      iVar2 = FUN_004c5e40(0x7a);
      while (iVar2 != 0) {
        iVar2 = FUN_004c5e40(0x7a);
      }
      goto LAB_00419716;
    }
LAB_0041971f:
    if (DAT_005d3112 != '\x01') goto LAB_004197da;
  }
  else {
LAB_00419716:
    if (DAT_005d3110 != '\x01') goto LAB_0041971f;
  }
  iVar2 = FUN_004c5e40(0x7a);
  if ((iVar2 != 0) && (DAT_006fb950 == 1)) {
    DAT_005d3110 = '\0';
  }
  if (DAT_005d3111 == '\0') {
    DAT_005d3112 = '\0';
  }
  if (((DAT_005d3110 == '\0') && (DAT_005d3112 == '\0')) && (iVar2 = 0, 0 < DAT_005d2ab0)) {
    puVar5 = &DAT_005d2bc8;
    piVar6 = &DAT_005ce9e8;
    do {
      if (*piVar6 != -1) {
        puVar1 = (undefined4 *)(*piVar6 * 0xf0 + 0xbc + DAT_00715e50);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
      }
      iVar2 = iVar2 + 1;
      piVar6 = piVar6 + 0xa5;
      puVar5 = puVar5 + 3;
    } while (iVar2 < DAT_005d2ab0);
  }
  iVar2 = FUN_004c5e40(0x7a);
  while (iVar2 != 0) {
    iVar2 = FUN_004c5e40(0x7a);
  }
LAB_004197da:
  fVar3 = (float)FUN_0040dad0(param_1);
  if (fVar3 != -NAN) {
    uVar4 = FUN_00419450(param_1);
    if ((char)uVar4 == '\x01') {
      pfVar7 = (float *)(&DAT_005ceab0 + (int)fVar3 * 0x294);
      fVar8 = FUN_004a6800(0x7128b0);
      *pfVar7 = (float)(fVar8 + (float10)*pfVar7);
    }
    else {
      pfVar7 = (float *)(&DAT_005ceab0 + (int)fVar3 * 0x294);
      *pfVar7 = 0.0;
    }
    if (0.25 < *pfVar7) {
      FUN_004c3fa0((byte *)s_A_racer_has_been_corrected__00593c20);
      FUN_0040e5a0(param_1,*(undefined4 **)(param_1 * 0xf0 + 0x34 + DAT_00715e50),'\0');
    }
    if ((DAT_005d3110 == '\0') && (DAT_005d3112 == '\0')) {
      FUN_0040d490((int)fVar3);
      FUN_00412570((int)fVar3);
    }
    uVar4 = IsRacerBraking((int)fVar3);
    FUN_00435470(param_1,uVar4);
    FUN_0041a300(fVar3);
  }
  return 1;
}


