
/* ==== FUN_0041126c @ 0041126c ==== 
 * signature: bool __register FUN_0041126c(int param_1)
 * body: 0041126c-004112b2
 */

bool FUN_0041126c(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)(param_1 + 0x14);
  for (pcVar3 = pcVar2; (*pcVar3 != '\0' && (*pcVar3 != '.')); pcVar3 = pcVar3 + 1) {
  }
  cVar1 = *pcVar3;
  if (cVar1 != '\0') {
    FUN_00403aa0((int *)(param_1 + 0x10),(undefined4 *)pcVar2,(int)pcVar3 - (int)pcVar2);
    FUN_00403e80((int *)(param_1 + 0x14),1,((int)pcVar3 - (int)pcVar2) + 1);
  }
  return cVar1 != '\0';
}


