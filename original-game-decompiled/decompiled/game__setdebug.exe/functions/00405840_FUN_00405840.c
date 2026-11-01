
/* ==== FUN_00405840 @ 00405840 ==== 
 * signature: undefined __register FUN_00405840(undefined * param_1, char * param_2)
 * body: 00405840-0040586d
 */

void FUN_00405840(undefined *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00405763(param_1,-(~uVar2 - 1));
  FUN_004056f8(param_1,param_2,~uVar2 - 1);
  return;
}


