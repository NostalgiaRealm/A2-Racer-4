
/* ==== FUN_00427dd0 @ 00427dd0 ==== 
 * signature: float10 __cdecl FUN_00427dd0(float param_1, float param_2, int param_3)
 * body: 00427dd0-00427e56
 */

float10 __cdecl FUN_00427dd0(float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = *(int *)((int)param_1 * 0xf0 + 0x10 + DAT_00715e50);
  if ((param_3 == 0) || (param_3 == 1)) {
    fVar1 = *(float *)(iVar4 + 0xc4);
    fVar2 = *(float *)(iVar4 + 200);
    fVar3 = *(float *)(iVar4 + 0xcc);
    param_1 = *(float *)(iVar4 + 0xd0);
  }
  else {
    fVar1 = *(float *)(iVar4 + 0xd4);
    fVar2 = *(float *)(iVar4 + 0xd8);
    param_1 = *(float *)(iVar4 + 0xe0);
    fVar3 = *(float *)(iVar4 + 0xdc);
  }
  fVar5 = (float10)fsin((float10)fVar3 * (float10)param_2);
  return ((float10)fVar1 * (float10)0.1 * (float10)param_2 + (float10)fVar2 * (float10)0.1 * fVar5)
         * (float10)0.1 * (float10)param_1;
}


