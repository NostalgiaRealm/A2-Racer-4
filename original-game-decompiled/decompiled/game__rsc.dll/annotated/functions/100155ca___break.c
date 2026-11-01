
/* ==== __break @ 100155ca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 100155ca-100155ca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


