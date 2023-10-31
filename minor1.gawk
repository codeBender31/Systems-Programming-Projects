NR > 1 {if($1 > 0 || $1 == 0)
	{printf"%d %d\n", $1,$1 % 360
		}
	else{ printf"%d %d\n", $1, -1 * $1 % 360
	}
	}
