
/* ==== __break @ 0055e1ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0055e1ba-0055e1ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


