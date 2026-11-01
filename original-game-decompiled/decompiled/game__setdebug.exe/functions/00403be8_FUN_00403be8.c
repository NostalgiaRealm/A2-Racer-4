
/* ==== FUN_00403be8 @ 00403be8 ==== 
 * signature: undefined __register FUN_00403be8(int * param_1, char * param_2, uint param_3)
 * body: 00403be8-00403bfe
 */

void FUN_00403be8(int *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  bool bVar3;
  
  bVar3 = true;
  uVar1 = param_3;
  pcVar2 = param_2;
  do {
    if (uVar1 == 0) break;
    uVar1 = uVar1 - 1;
    bVar3 = *pcVar2 == '\0';
    pcVar2 = pcVar2 + 1;
  } while (!bVar3);
  if (bVar3) {
    uVar1 = ~uVar1;
  }
  FUN_00403aa0(param_1,(undefined4 *)param_2,uVar1 + param_3);
  return;
}


