
/* ==== FUN_004aba30 @ 004aba30 ==== 
 * signature: undefined __thiscall FUN_004aba30(void * this, int * param_1)
 * body: 004aba30-004aba89;004aba91-004abae7;004abaef-004abb45;004abb4d-004abba0;004abba8-004abd71;004abd75-004abdb7
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004aba8a-004aba90 004abae8-004abaee 004abb46-004abb4c 004abba1-004abba7 004abd72-004abd74
 */

void __thiscall FUN_004aba30(void *this,int *param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  undefined1 *puVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  int *piStack_138;
  float *pfStack_134;
  int *piStack_130;
  int *local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int aiStack_10c [12];
  int aiStack_dc [12];
  float local_ac [16];
  float afStack_6c [24];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056f49b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00558b35((char *)&local_12c,4,1,param_1);
  if (0x10 < (int)local_12c) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Too_many_road_planes____005b0490);
  }
  iVar7 = 0;
  if (0 < (int)local_12c) {
    pfVar5 = local_ac;
    do {
      fVar2 = (float)FUN_004b30c0(param_1);
      *pfVar5 = fVar2;
      iVar7 = iVar7 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar7 < (int)local_12c);
  }
  FUN_00558b35((char *)&pfStack_134,4,1,param_1);
  if (0x18 < (int)pfStack_134) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Too_many_land_planes____005b045c);
  }
  iVar7 = 0;
  if (0 < (int)pfStack_134) {
    pfVar5 = afStack_6c;
    do {
      fVar2 = (float)FUN_004b30c0(param_1);
      *pfVar5 = fVar2;
      iVar7 = iVar7 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar7 < (int)pfStack_134);
  }
  FUN_00558b35((char *)&piStack_138,4,1,param_1);
  if (0xc < (int)piStack_138) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Too_many_extra_planes___005b0428);
  }
  iVar7 = 0;
  if (0 < (int)piStack_138) {
    piVar6 = aiStack_10c;
    do {
      iVar3 = FUN_004b30c0(param_1);
      *piVar6 = iVar3;
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar7 < (int)piStack_138);
  }
  FUN_00558b35((char *)&piStack_130,4,1,param_1);
  if (0xc < (int)piStack_130) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Too_many_rail_planes____005b03f4);
  }
  iVar7 = 0;
  if (0 < (int)piStack_130) {
    piVar6 = aiStack_dc;
    do {
      iVar3 = FUN_004b30c0(param_1);
      *piVar6 = iVar3;
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar7 < (int)piStack_130);
  }
  puVar4 = FUN_0049df90((undefined1 *)&uStack_11c,(byte *)s_chunk__d_005b03e8);
  uStack_4 = 0;
  FUN_004093c0(this,puVar4,0,0xffffffff);
  uStack_4 = 0xffffffff;
  if (iStack_118 != 0) {
    cVar1 = *(char *)(iStack_118 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_118 + -1));
    }
    else {
      *(char *)(iStack_118 + -1) = cVar1 + -1;
    }
  }
  uStack_128 = 0x3f800000;
  uStack_124 = 0x3f800000;
  uStack_120 = 0x3f800000;
  uStack_11c = 0x3f800000;
  iStack_118 = 0x3f800000;
  uStack_114 = 0x3f800000;
  puVar4 = FUN_004a4260(&DAT_00715f58,this,4);
  FUN_004a1050((int)puVar4);
  FUN_004abf30(puVar4,(int *)local_ac,local_12c);
  FUN_004abf30(puVar4,(int *)afStack_6c,(int *)pfStack_134);
  FUN_004abf30(puVar4,aiStack_10c,piStack_138);
  FUN_004abf30(puVar4,aiStack_dc,piStack_130);
  FUN_004abdc0(this,puVar4);
  FUN_004ac020((int)puVar4,this);
  FUN_004ac310(this,local_ac,local_12c,afStack_6c,pfStack_134,aiStack_10c,(int)piStack_138,
               aiStack_dc,(int)piStack_130);
  DAT_00715f48 = DAT_00715f48 + 1;
  if (DAT_0073b04c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__free_all__s__d_005b03a8);
  }
  iVar7 = 0;
  if (0 < DAT_0073b044) {
    do {
      iVar7 = iVar7 + 1;
      *(undefined1 *)(DAT_0073b050 + -1 + iVar7) = 0;
    } while (iVar7 < DAT_0073b044);
  }
  DAT_0073b048 = 0;
  ExceptionList = pvStack_c;
  return;
}


