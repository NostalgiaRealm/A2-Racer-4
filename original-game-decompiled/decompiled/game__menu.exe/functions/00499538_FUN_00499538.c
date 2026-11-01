
/* ==== FUN_00499538 @ 00499538 ==== 
 * signature: undefined __register FUN_00499538(void)
 * body: 00499538-0049958d
 */

void FUN_00499538(void)

{
  if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9) == '\x02') {
    if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 2) == 0) {
      FUN_00480584(*(int **)PTR_DAT_004ab694,0x4995a8,6);
    }
    else {
      FUN_00480584(*(int **)PTR_DAT_004ab694,0x499598,3);
    }
  }
  return;
}


