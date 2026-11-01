
/* ==== FUN_00413520 @ 00413520 ==== 
 * signature: undefined __cdecl FUN_00413520(int param_1)
 * body: 00413520-0041374e
 */

void __cdecl FUN_00413520(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = (&DAT_005cea44)[param_1 * 0xa5];
  iVar10 = *(int *)(&DAT_005cea68 + param_1 * 0x294);
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  if (iVar10 < *(int *)(&DAT_00709f1c + iVar8 * 0x340)) {
    iVar9 = FUN_004641a0(iVar8);
    fVar2 = *(float *)(&DAT_00709f24 + (iVar10 + iVar9 * 0x34) * 0x10);
    iVar9 = FUN_004641a0(iVar8);
    fVar3 = *(float *)(&DAT_00709f28 + (iVar10 + iVar9 * 0x34) * 0x10);
    iVar9 = FUN_004641a0(iVar8);
    fVar4 = *(float *)(&DAT_00709f2c + (iVar10 + iVar9 * 0x34) * 0x10);
    iVar10 = DAT_0073b0d0 + *(int *)(iVar1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
    fVar5 = fVar2 - *(float *)(iVar10 + 0x50);
    fVar7 = fVar3 - *(float *)(iVar10 + 0x54);
    fVar6 = fVar4 - *(float *)(iVar10 + 0x58);
    if (SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6) < 30.0) {
      *(int *)(&DAT_005cea68 + param_1 * 0x294) = *(int *)(&DAT_005cea68 + param_1 * 0x294) + 1;
    }
    FUN_004037a0(param_1,*(undefined4 *)(&DAT_00709f18 + iVar8 * 0x340),
                 *(undefined4 *)(&DAT_00709f18 + iVar8 * 0x340));
    FUN_00403a70((float)param_1,fVar2,fVar3,fVar4);
    FUN_00403cd0(param_1);
  }
  else if (iVar1 != -1) {
    switch((&DAT_00709f10)[iVar8 * 0xd0]) {
    case 0xd:
    case 0x10:
      FUN_00426fc0(&DAT_005d3460,iVar1,'\0');
      iVar8 = FUN_0049eb50(&DAT_006fbb5c,*(int *)(iVar1 * 0xf0 + 0x30 + DAT_00715e50));
      FUN_0049e570(iVar8);
      FUN_004a7a50(iVar1);
      FUN_0040da60(param_1);
      return;
    case 0xe:
    case 0x11:
      FUN_004037a0(param_1,0,0);
      FUN_00403cd0(param_1);
      iVar8 = *(int *)(iVar1 * 0xf0 + 0x30 + DAT_00715e50);
      break;
    case 0xf:
    case 0x12:
      FUN_0040d470(&DAT_005ce9e8 + param_1 * 0xa5,0x19);
      iVar8 = *(int *)(iVar1 * 0xf0 + 0x30 + DAT_00715e50);
      break;
    default:
      goto switchD_00413584_default;
    }
    iVar8 = FUN_0049eb50(&DAT_006fbb5c,iVar8);
    FUN_0049e570(iVar8);
    return;
  }
switchD_00413584_default:
  return;
}


