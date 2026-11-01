
/* ==== FUN_0041c554 @ 0041c554 ==== 
 * signature: undefined __register FUN_0041c554(int * param_1, HENHMETAFILE param_2, undefined4 param_3)
 * body: 0041c554-0041c5e1
 */

void FUN_0041c554(int *param_1,HENHMETAFILE param_2,undefined4 param_3)

{
  UINT UVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  
  uVar3 = 0;
  if (param_2 != (HENHMETAFILE)0x0) {
    UVar1 = GetEnhMetaFileHeader(param_2,100,(LPENHMETAHEADER)&stack0xffffff94);
    param_3 = extraout_ECX;
    uVar3 = extraout_EDX;
    if (UVar1 == 0) {
      FUN_004197c8();
      param_3 = extraout_ECX_00;
      uVar3 = extraout_EDX_00;
    }
  }
  FUN_0041c7a8((int)param_1,uVar3,param_3);
  if (*(HENHMETAFILE *)(param_1[8] + 8) != (HENHMETAFILE)0x0) {
    DeleteEnhMetaFile(*(HENHMETAFILE *)(param_1[8] + 8));
  }
  FUN_0041756c(*(HGDIOBJ *)(param_1[8] + 0x14));
  iVar2 = param_1[8];
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(HENHMETAFILE *)(iVar2 + 8) = param_2;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (param_2 != (HENHMETAFILE)0x0) {
    *(int *)(iVar2 + 0xc) = local_4c - local_54;
    *(int *)(iVar2 + 0x10) = local_48 - local_50;
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar2 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


