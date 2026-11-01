
/* ==== FUN_00515690 @ 00515690 ==== 
 * signature: uint __cdecl FUN_00515690(uint param_1, int param_2, int param_3, int param_4, uint param_5)
 * body: 00515690-00515780
 */

uint __cdecl FUN_00515690(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = (uint *)(param_2 + 4 + param_4 * 4);
  switch(param_3 - param_4) {
  case 1:
    return (*puVar3 - param_5) % param_1;
  case 2:
    return ((puVar3[1] - param_5) + *puVar3) % param_1;
  case 3:
    return (((puVar3[2] + puVar3[1]) - param_5) + *puVar3) % param_1;
  case 4:
    uVar2 = puVar3[3];
    goto LAB_0051571c;
  case 5:
    uVar2 = puVar3[4];
    break;
  case 6:
    uVar2 = puVar3[5] + puVar3[4];
    break;
  default:
    uVar2 = 0;
    iVar4 = 3;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      iVar5 = iVar4;
      if (uVar1 != param_5) {
        iVar5 = iVar4 + 3;
        uVar2 = uVar2 ^ (uVar1 >> (0x20 - (byte)iVar4 & 0x1f)) + (uVar1 << ((byte)iVar4 & 0x1f));
        if (0x1f < iVar5) {
          iVar5 = iVar4 + -0x1d;
        }
      }
      iVar4 = iVar5;
    } while (*puVar3 != 0);
    return uVar2 % param_1;
  }
  uVar2 = uVar2 + puVar3[3];
LAB_0051571c:
  return (((uVar2 + puVar3[2] + puVar3[1]) - param_5) + *puVar3) % param_1;
}


