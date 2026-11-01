
/* ==== FUN_00413f00 @ 00413f00 ==== 
 * signature: undefined4 __cdecl FUN_00413f00(int param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5)
 * body: 00413f00-00413ff7
 */

undefined4 __cdecl
FUN_00413f00(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  iVar2 = 0;
  if (DAT_005d1ba8 != -1) {
    puVar3 = &DAT_005d1ba8;
    do {
      if (0x5d2697 < (int)puVar3) break;
      piVar1 = puVar3 + 0xe;
      puVar3 = puVar3 + 0xe;
      iVar2 = iVar2 + 1;
    } while (*piVar1 != -1);
    if (iVar2 == 0x32) {
      return 0;
    }
  }
  iVar5 = iVar2 * 0x38;
  (&DAT_005d1ba8)[iVar2 * 0xe] = param_1;
  (&DAT_005d1bac)[iVar2 * 0xe] = param_3;
  iVar4 = DAT_00715e50 + param_1 * 0xf0;
  (&DAT_005d1bb4)[iVar2 * 0xe] = *(undefined4 *)(iVar4 + 0x34);
  (&DAT_005d1bb8)[iVar2 * 0xe] = (&DAT_005d2698)[param_2 * 10];
  *(undefined4 *)(&DAT_005d1bc8 + iVar5) = 0;
  *(undefined4 *)(&DAT_005d1bbc + iVar5) = 0;
  (&DAT_005d1bc0)[iVar2 * 0xe] = param_5;
  *(undefined4 *)(&DAT_005d1bc4 + iVar5) = param_4;
  *(undefined4 *)(iVar4 + 0x60) = 1;
  FUN_0040e340(param_1,&param_1,&param_3);
  fVar6 = FUN_00413de0(param_1,(byte)(&DAT_005d1bb8)[iVar2 * 0xe]);
  iVar2 = DAT_0059293c;
  *(float *)(&DAT_005d1bcc + iVar5) = (float)fVar6;
  if (iVar2 == -1) {
    iVar2 = FUN_0049ecb0(&DAT_006fbb5c,s_TOETER_00592df0);
    DAT_0059293c = iVar2;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


